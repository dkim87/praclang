#include <stdio.h>
#include <string.h>

char ibuf[31] = { 0 };
char obuf[23] = ":regional_indicator_?:";

int main(int argc, char** argv)
{
    int lpcnt = 1;
    int wcnt = 0;
    if (argc == 1) {
    restart:;
        printf(">");
        gets(ibuf);
        if (!strcmp(ibuf, "/q") || !strcmp(ibuf, "/quit"))
        {
            puts("program ends.");
            return 0;
        }
        wcnt = strlen(ibuf);
    }
    else {
        if (!strcmp(argv[1], "/?") || !strcmp(argv[1], "/help"))
        {
            puts("Discord Regional Indicator Maker\nMakes Regional Indicator Emoji for Discrod.\n\n/?\tShows this help message\n/q\tShuts program down.");
            return 0;
        }
        while (lpcnt<argc)
        {
            strcpy(ibuf + wcnt, argv[lpcnt]);
            wcnt += strlen(argv[lpcnt]);
            ++lpcnt;
        }
    }
    lpcnt = 0;
    while (lpcnt<wcnt)
    {
        obuf[20] = ibuf[lpcnt];
        printf("%s ", obuf);
        ++lpcnt;
    }
    if (argc == 1) {
        printf("\n");
        goto restart;
    }
    return 0;
}
