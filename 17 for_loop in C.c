#include <stdio.h>

int main()
{
    // ********************QUICK QUIZ***********************
    int i,n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
     printf("n natural numbers are\n");
    for (int a = 0; a <= n; a++)
    {
        printf("The value of a is %d\n", a);
    }
    //**************************CASE OF DECREMENTING BY FOR LOOP********************************
    printf("\n\n n natural numbers in reverse order are\n");
    
    for (int i=n; i; i--)
        printf("The value of i is %d\n", i);
    return 0;
}