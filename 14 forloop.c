#include <stdio.h>

int main()
{
    int i, j;

    for (i = 1; i <= 13; i++)
    {
        /* G */
        for (j = 1; j <= 7; j++)
        {
            if ((i <= 3 && j <= 6) ||
                (i >= 11 && j <= 7) ||
                (j <= 3) ||
                (i >= 8 && i <= 10 && j >= 5 && j <= 7))
                printf("* ");
            else
                printf("  ");
        }

        printf("   ");

        /* C */
        for (j = 1; j <= 6; j++)
        {
            if (i <= 3 || i >= 11 || j <= 3)
                printf("* ");
            else
                printf("  ");
        }

        printf("   ");

        /* C */
        for (j = 1; j <= 6; j++)
        {
            if (i <= 3 || i >= 11 || j <= 3)
                printf("* ");
            else
                printf("  ");
        }

        printf("\n");
    }

    return 0;
}
