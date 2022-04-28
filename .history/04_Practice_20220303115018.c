#include <stdio.h>

// Calculation of Simple Interest

int main(){
    int principal = 1000, rate = 4, years= 1;
    int simpleInterest = principal*rate*years/100;

    printf("the value of simple interest is %d\n" , simpleInterest);
    return 0;
}