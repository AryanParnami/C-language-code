#include <stdio.h>

int main()
{
    // C program to check whether the number is even od odd
    // int a ,b;
    // printf("Enter a number\n");
    // scanf("%d",&a);
    // if(a%2==0){
    //     printf("%d is even number\n",a);
    // }
    // else{
    //     printf("%d is odd number\n",a);
    // }
    // C language code for  multiple if else statement (greater than or equal to)
    int age;
    printf("Enter your age:\n");
    scanf("%d", &age);
    if (age >= 90)
    {
        printf("You are above 90, you can't drive ");
    }
    else
    {
        printf("You can drive ");
    }

    return 0;
}