#include <stdio.h>
// for loop

int main()
{
    int i, j;
    for (i = 0, j = 0; j < 8, i < 8; i++)
    {
        printf("%d %d \n", i, j);
        j++;
    }

    return 0;
}