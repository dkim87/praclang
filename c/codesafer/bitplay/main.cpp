#include <cstdio>
#include <cstdint>

int main()
{
    const   int     point[]{ 0x10010010, 0x10001000, 0x10000101, 0x01010000, 0x01001011, 0x01000100, 0x00110001, 0x00101000, 0x00100110 };
    const   char*   judge[]{ "draw\a\a\a", " wins\a\a" };
    int	    score[]{ 0x11111111, 0x11111111 };
    int	    turn, space, pos;
    char    quest[] = "\n?'s turn. Enter a position ( 1 - 9 ) : ";
    char&   mark    = quest[ 1 ];
    char    board[] = "\a\n. . .\n. . .\n. . .\n";

    for( turn = 1, space = 9; space > 0; space = ( score[ turn ] += point[ pos ] ) & 0x44444444 ? -1 : space - 1 )
    {
        mark = "XO"[ turn ^= 1 ];
        do printf( quest ); while( scanf( "%d", &pos ) < 1 || board[ pos * 2 ] != '.' );
        printf( ( board[ pos * 2 ] = mark, board ) );
    }
    printf( "%s Replay ( Y / N ) ? ", ( *(long long*)( quest + 1 - space ) = *(long long*)judge[ -space ], quest ) );
    return  ( scanf( " %c",  &turn ), turn | 0x20 ) == 'y' ? main() : 0;
}
