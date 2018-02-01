//==============================================================================================
//  example 2 : variable test
#include "_bench.h"
#include <math.h>
//------------------------------+---------------------------------------------------------------

using   SOURCE = float;
using   RESULT = float;

RESULT  dst0, dst1, dst2;

//------------------------------+---------------------------------------------------------------

void    prepare( void* result )
{
    *(RESULT*)result = 65536;
}

bool    compare( void* result, void* answer, std::size_t bytes )
{
    return  memcmp( result, answer, bytes ) == 0;
}
//------------------------------+---------------------------------------------------------------

void    math_sqrt( void* result )
{
    *(float*)result = sqrt( *(float*)result );
}

void    for_sqrt( void* result )
{
    float i = 0;
    for( float s = 0; s < *(float*)result; s += i * 2 + 1, ++i );
    *(float*)result = i;
}
//------------------------------+---------------------------------------------------------------

int main()
{
    BENCH bench( "square root", 1000, prepare, compare );
    bench.solution( math_sqrt, dst0, sizeof dst0 );
    bench.add( FUN( math_sqrt ), dst1 );
    bench.add( FUN( for_sqrt  ), dst2 );
    bench.run();
    return 0;
}
