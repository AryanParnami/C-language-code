#include<stdio.h>
int main()
{
    int a,b;  // declaring variables without there values
    printf("Enter the value of a\n");
    scanf("%d",&a); // %d is formate specifier and & is address specifier
    printf("Enter the value of b\n");
    scanf("%d",&b);
    printf("The sum of a and b is %d\n",a+b);
    if (a>b)// we used this condition to avoid the negative sub value
    {
        printf("The sub of a and b is %d\n",a-b);
    }
    else{
        printf("The sub of a and b is %d\n",b-a);
    }
     

    return 0;
}