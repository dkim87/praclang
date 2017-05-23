#include <stdio.h>

/*
 * Program prints a histogram of the frequencies of characters in its input.
 * A horizontal oriented bars.
 */

int main() {
    int             i        , c;
    int             abc       [26];

    for (i = 0; i < 26; ++i)
        abc[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c > 64 && c < 91) {
            ++abc[c - 65];
        } else if (c > 96 && c < 123) {
            ++abc[c - 97];
        }
    }
    printf("number of every character in input \n");
    for (i = 0; i < 26; ++i) {
        printf("%c %4d ", (65 + i), abc[i]);
        while (abc[i] > 0) {
            printf("|");
            --abc[i];
        }
        printf("\n");
    }
    return 0;
}
