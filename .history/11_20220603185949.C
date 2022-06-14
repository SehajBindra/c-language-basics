#include <stdio.h>
void Display(int arr[], int x)
{
    for (int i = 0; i < x; i++)
        printf("  %d\t", arr[i]);
}
void Insert(int arr[], int x)
{
    int u, t;
    arr[x + 1];
    printf("Enter the location where you want to insert the value: ");
    scanf("%d", &u);
    printf("Enter the value: ");
    scanf("%d", &t);
    for (int i = x; i > u - 1; i--)
        arr[i] = arr[i - 1];
    arr[u - 1] = t;
    printf("Array after insertion is\t: ");
    for (int i = 0; i < x + 1; i++)
        printf(" %d\t ", arr[i]);
}
void Delete(int arr[], int x)
{
    int a, c = 1;
    printf("Enter the element to be deleted : ");
    scanf("%d", &a);
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == a)
        {
            for (int j = i; j < x - 1; j++)
            {
                arr[j] = arr[j + 1];
                c = 0;
            }
        }
    }
    if (c == 0)
    {
        printf("Array after deleting the element : \n");
        for (int i = 0; i < x - 1; i++)
            printf("   %d\t", arr[i]);
    }
    else
        printf("Element not found ");
}
void Replace(int arr[], int x)
{
    int a, b, c = 1;
    printf("Enter the element to be replaced : ");
    scanf("%d", &a);
    printf("Enter the new value of the element : ");
    scanf("%d", &b);
    for (int i = 0; i < x; i++)
    {
        if (arr[i] == a)
        {
            arr[i] = b;
            c = 0;
        }
    }
    if (c == 0)
    {
        printf("Array after replacing the element : \n");
        for (int i = 0; i < x; i++)
            printf("   %d\t", arr[i]);
    }
    else
        printf("Element not found ");
}
int main()
{
    int j, y, a;
    printf("How many elements do you want in an array: ");
    scanf("%d", &a);
    int x[a];
    printf("Enter An Array:\n");
    for (j = 0; j < a; j++)
        scanf("%d", &x[j]);
    printf("1. Display\n2. Insert\n3. Replace\n4. Delete\t: ");
    scanf("%d", &y);
    if (y == 1)
        Display(x, a);
    else if (y == 2)
        Insert(x, a);
    else if (y == 3)
        Replace(x, a);
    else if (y == 4)
        Delete(x, a);
    else
    {
        printf("Invalid Response try again ..\n");
        main();
    }
    return 0;
}