#include <stdio.h>

void printarray(int *A, int n)
{
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", A[i]);
    }

    printf("\n");
}

void inserstionsort(int *A, int n)
{
    int key, j;

    for (int i = 1; i <= n - 1; i++)
    {
        key = A[i];
        j = i - 1;

        while (
            j >= 0 && A[j] > key)
        {
            A[j + 1] = A[j];
            j--;
        }
        A[j + 1] = key;
    }

    // int key, j;

    // for (int i = 1; i <= n - 1; i++)
    // {
    //     key = A[i];
    //     j = i - 1;
    //     while (j >= 0 && A[j] > key)
    //     {
    //         A[j + 1] = A[j];
    //         j--;
    //     }

    //     A[j + 1] = key;
    // }
}

int main()
{
    int A[] = {24, 3, 46, 28, 37, 9, 4, 7, 14, 2, 100, 1};
    int n = 12;
    printarray(A, n);
    inserstionsort(A, n);
    printarray(A, n);

    return 0;
}