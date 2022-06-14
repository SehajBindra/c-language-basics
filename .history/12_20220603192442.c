#include <stdio.h>
void insert(int arr[], int x)
{
    {
        int pos, val;
        arr[x + 1];
        printf("Enter the postion where you want to insert the value: ");
        scanf("%d", &pos);
        printf("Enter the value: ");
        scanf("%d", &val);

        for (int i = x; i > pos - 1; i--)
            arr[i] = arr[i - 1];

        arr[pos - 1] = val;
        printf("Array after insertion: ");
        for (int i = 0; i < x + 1; i++)
            printf("%d", arr[i]);
    }
    void main()
    {
        int a, j, y;
        printf("How many elements do you want in an array: ");
        scanf("%d", &a);
        int x[a];
        printf("Enter an array: ");
        for (j = 0; j < a; j++)

            scanf("%d", &x[j]);

        scanf("%d", &y);
        insert(x, a);
    }
}