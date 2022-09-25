#include <stdio.h>

int main(){
    int principal;
    int rate;
    int years;
    printf("What is the amount of principal \n ");
    scanf("%d",&principal);
    printf("What is the rate of interest \n ");
    scanf("%d",&rate);
    printf("For how many years the loan is taken \n ");
    scanf("%d",&years);
    int simpleInterest = (principal * rate * years)/100;
    printf("the value of simple Interest is %d",simpleInterest);
    return 0;
}