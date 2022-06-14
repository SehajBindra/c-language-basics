#include <stdio.h>

int BinarySearch(int arr[], int size, int element)
{

    int low, high, mid;
    low = 0;
    high = size - 1;

    while (low <= high)
    {
        mid = (low + high) / 2;

        if (arr[mid] == element)
        {
            return mid;
        }

        if (arr[mid] < element)
        {
            low = mid + 1;
        }

        else
        {
            high = mid - 1;
        }

        return -1;
    }
}

int main()
{
    int arr[] = {2, 8, 16, 24, 56, 128, 256};
    int size = sizeof(arr) / sizeof(int);
    int element = 24;

    int searchindex = BinarySearch(arr, element, size);

    (searchindex == -1) ? printf("the element was not found") : printf("the Element was found at index : %d", searchindex);
}