#pragma once
//==============================================================================================
//                              C<>DE_N_T4LK5
//  file name                   bench.h
//  completion level            2                               ( basic, moderate, complete )
//  author                      codesafer
/// since                       2015.
//  date                        2017.07.18
//------------------------------+---------------------------------------------------------------
#if _MSC_VER
#pragma warning(disable: 4996)  // _CRT_SECURE_NO_WARNINGS
#include <intrin.h>
#else
#include <x86intrin.h>
#endif

#include <iostream>
#include <stdio.h>              // printf
#include <string.h>             // memcmp
#define min_( a, b )            ( (a) < (b) ? (a) : (b) )

//------------------------------+---------------------------------------------------------------

#ifndef SYS_BITS
#define CHAR_BITS               8
#define SYS_BYTES               sizeof( std::size_t )
#define SYS_BITS                ( SYS_BYTES * CHAR_BITS )
#endif

//------------------------------+---------------------------------------------------------------

using   ON_RUN      =           void( & )( void* );
using   ON_PREPARE  =           void( & )( void* );
using   ON_COMPARE  =           bool( & )( void*, void*, std::size_t );

//------------------------------+---------------------------------------------------------------
//  BENCH 에 의해서만 접근되기 때문에 모든 멤버가 private ( class default ) 입니다
class                           RUNNER
{
friend  class                   BENCH;
    const   char*               name;
    unsigned long long          elapsed;
    const   ON_RUN              on_run;
    void*                       result;

                                RUNNER( const char* name, ON_RUN& on_run, void* result )
    :   name( name )
    ,   on_run( on_run )
    ,   elapsed( -1 )
    ,   result( result )
    {
    }

    void                        run()
    {
        auto    begin   = __rdtsc();
        on_run( result );
        elapsed         = min_( elapsed, __rdtsc() - begin );
    }
};
///-----------------------------+---------------------------------------------------------------

#include <vector>

class                           BENCH
{
private:
    const   char*               title;
    std::vector< RUNNER* >      runners;
    ON_PREPARE                  on_prepare;
    ON_COMPARE                  on_compare;
    void*                       answer;
    std::size_t                 answer_size;
    const   unsigned int        trial;

public:
                                BENCH( const char* title, const int trial,
                                       ON_PREPARE& prepare, ON_COMPARE& compare
    )
    :   title( title )
    ,   trial( trial )
    ,   on_prepare( prepare )
    ,   on_compare( compare )
    {
    };
                               ~BENCH()
    {
        for( auto runner : runners )
            delete[] runner;
        runners.clear();
    }

    auto                        record( unsigned int index ) const
    {
        return  runners[ index ]->elapsed;
    }

    auto                        runner_count() const
    {
        return  runners.size();
    }

    void                        solution( ON_RUN& correct_function,
                                          void* result, const std::size_t bytes )
    {
        answer      = result;
        answer_size = bytes;
        // on_prepare( result );
        correct_function( result );
    }

    template< typename T >
    void                        solution( ON_RUN& correct_function,
                                          T& result, const std::size_t bytes )
    {
        solution( correct_function, &result, bytes );
    }

    void                        add( const char* name, ON_RUN& on_run, void* result )
    {
        runners.emplace_back( new RUNNER( name, on_run, result ) );
    }

    template< typename T >
    void                        add( const char* name, ON_RUN& on_run, T& result )
    {
        add( name, on_run, &result );
    }

    void                        run() const
    {
        if( runners.empty() )
            return;

        printf( "\n   < %d bits %d trial >    %s\n", (int)SYS_BITS, trial, title );
        puts( "   ----------------+---------------------------------+-----------------------" );
        puts( "   |    CHECKER    |          function name          |    minimum clocks    |" );
        puts( "   ----------------+---------------------------------+-----------------------" );

        unsigned long long  min_clocks = -1;
        unsigned long long  max_clocks = 0;
        RUNNER* min_runner = runners[ 0 ];
        RUNNER* max_runner = runners[ 0 ];

        for( const  auto    runner : runners )
        {
            int     pass_count = 0;
            for( unsigned int i = 0; i < trial; ++i )
            {
                on_prepare( runner->result );
                runner->run();
                pass_count += on_compare( runner->result, answer, answer_size );
            }

            if( min_clocks > runner->elapsed )
            {
                min_runner = runner;
                min_clocks = runner->elapsed;
            }
            if( max_clocks < runner->elapsed )
            {
                max_runner = runner;
                max_clocks = runner->elapsed;
            }

            char    temp[ 14 ];
            if( trial == pass_count )
                sprintf( temp, "       PASSED" );
            else
                sprintf( temp, "FAILED%7d", trial - pass_count );

            printf( "   [ %s ] %32s %15llu clocks\n", temp, runner->name, runner->elapsed );
        }
        puts( "   --------------------------------------------------------------------------" );
        printf( "   Winner is %s  ( %.2f times faster )\n\n",
                min_runner->name, float( max_clocks ) / min_clocks );
    }
};

#define FUN( function_name )    #function_name, function_name

//==============================================================================================
