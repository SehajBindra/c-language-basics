// Linear Search in C

#include <stdio.h>

int search(int array[], int size, int element)
{

    // Going through array sequencially
    for (int i = 0; i < size; i++)
        if (array[i] == element)
            return i;
    return -1;
}

int main()
{
    int array[] = {2, 4, 0, 1, 9};
    int element = 1;
    int size = sizeof(array) / sizeof(array[0]);

    int result = search(array, size, element);

    (result == -1) ? printf("Element not found") : printf("Element found at index: %d", result);
}