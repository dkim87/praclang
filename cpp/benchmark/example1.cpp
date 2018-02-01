//==============================================================================================
//  example 1 : buffer test
#include "_bench.h"
#include <cstring>
#include <string.h>
//------------------------------+---------------------------------------------------------------

using   SOURCE = float;
using   RESULT = unsigned int;

constexpr   std::size_t SIZE = 1024 * 1024;

SOURCE  src[ SIZE ];
RESULT  dst0[ SIZE ], dst1[ SIZE ], dst2[ SIZE ];

//------------------------------+---------------------------------------------------------------

void    prepare( void* result )
{
    std::memcpy( result, src, sizeof src );
}

bool    compare( void* result, void* answer, std::size_t bytes )
{
    return  memcmp( result, answer, bytes ) == 0;
}
//------------------------------+---------------------------------------------------------------

void    std_memcpy( void* result )
{
    std::memcpy( result, src, SIZE * sizeof *src );
}

void    copy_bytes( void* result )
{
    __movsb( (unsigned char*)result, (unsigned char*)src, SIZE * sizeof *src );
}
//------------------------------+---------------------------------------------------------------

int main()
{
    for( int i = 0; i < SIZE; ++i )
        src[ i ] = i;

    BENCH bench( "memory copy", 1000, prepare, compare );
    bench.solution( std_memcpy, dst0, sizeof dst0 );
    bench.add( FUN( std_memcpy ), dst1 );
    bench.add( FUN( copy_bytes ), dst2 );
    bench.run();
    return 0;
}
