#include <stdio.h>

// linear search

int search(int array[], int n, int x)
{

    // Going through array sequencially
    for (int i = 0; i < n; i++)
        if (array[i] == x)
            return i;
    return -1;
}

int GFG()
{
    int array[] = {24, 40, 10, 11, 9};
    int x = 1;
    int n = sizeof(array) / sizeof(array[0]);

    int result = search(array, n, x);

    (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}
