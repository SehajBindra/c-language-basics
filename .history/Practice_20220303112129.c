#include <stdio.h>

int main(){
   int length , breath ;
   printf("what is the length of the rectangle\n");
   scanf("%d", &length);

   printf("what is the breath of the rectangle\n");
   scanf("%d", &breath);

   printf("the area of rectangle is %d", length*breath);
    return 0;
}