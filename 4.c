// two operations of 1 d array : create and Display

#include <stdio.h>

int arr[50], k;
void create();
void display();

int main()
{
    while (1)
    {
        int ch;
        printf("1.create \n 2.display \n 3.Exit \n ");
        printf("Enter a Choice :");
        scanf("%d", &ch);

        switch (ch)
        {
        case 1:
            create();
            break;

        case 2:
            display();
            break;

        case 3:
            exit(0);
        }
    }

    return 0;
}

void create()
{
    int i;
    printf("enter the Size of 1d array :");
    scanf("%d", &k);
    printf("enter the  1d array :  \n");
    for (i = 0; i <= k; i++)
    {
        scanf("%d", &arr[i]);
    }
}

void display()
{
    int i;
    printf(" array : \n");
    for (i = 0; i <= k; i++)
    {
        printf("%d", arr[i]);
        printf(" \n");
    }
}