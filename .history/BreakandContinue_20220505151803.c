#include <stdio.h>

int main()
{
    int i, age;
    for (i = 0; i < 36; i++)
    {
        printf("%d \n Enter your age: ", i);
        scanf("%d", &age);

        // if (age > 20)
        // {
        //     break;
        // }

        if (age < 10)
        {
            continue;
        }

        printf("you are doing good in life alright! \n");
        printf("fuck off everything \n and work on your self");
    }

    return 0;
}