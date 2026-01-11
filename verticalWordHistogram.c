#include <stdio.h>

#define MAXWORD 20   // max word length we care about

int main() {
    int c, len = 0;
    int wl[MAXWORD + 1] = {0};
    int max = 0;

    while ((c = getchar()) != EOF) {
        if (c == ' ' || c == '\n' || c == '\t') {
            if (len > 0) {
                if (len > MAXWORD)
                    len = MAXWORD;
                wl[len]++;
                if (wl[len] > max)
                    max = wl[len];
                len = 0;
            }
        } else {
            len++;
        }
    }

    /* print vertical histogram */
    for (int i = max; i > 0; i--) {
        for (int j = 1; j <= MAXWORD; j++) {
            if (wl[j] >= i)
                printf(" * ");
            else
                printf("   ");
        }
        putchar('\n');
    }

    /* x-axis */
    for (int j = 1; j <= MAXWORD; j++)
        printf("---");
    putchar('\n');

    for (int j = 1; j <= MAXWORD; j++)
        printf("%2d ", j);
    putchar('\n');

    return 0;
}
