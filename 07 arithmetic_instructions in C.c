#include <stdio.h>
#include <math.h> // using this library because we use power operator pow below

int main()
{
    int a, b;
    printf("Enter the value of a\n ");
    scanf("%d", &a);
    printf("Enter the value of b\n ");
    scanf("%d", &b);
    int z;
    z = b * a; // legal
    // b * a = z; illegal
    printf("The value of a + b is %d\n", a + b);
    printf("The value of a - b is %d\n", a - b);
    printf("The value of a * b is %d\n", a * b);
    printf("The value of a / b is %d\n", a / b);
    printf("The value of z is %d\n", z);
    //**************************remainder instructions*******************
    printf("When 5 is divided by 2 gives the remainder of %d\n", 5 % 2);
    printf("When -5 is divided by 2 gives the remainder of %d\n", -5 % 2); // - sign will not be neglected
    printf("When 5 is divided by -2 gives the remainder of %d\n", 5 % -2); // - sign will be neglected
    // no operator is assumed to be present
    // printf("The value of 4 * 5 is %d\n",(4)(5));----------> wrong will not return 20 WRONG!
    printf("The value of 4 * 5 is %d\n", (4) * (5));

    // there is no operator to perform exponentiation (a to the power b a^b) in C language
    // printf("The value of 4^5 is %d\n",4^5); --> Will not return 4^5
    printf("The value of 4 to the power 5 is %f\n", pow(2, 5)); // pow is used for power operators

    printf("3 divided by 9 will be %d\n", 3 / 9);   // because (%d) is used it will convert 0.3333 into 0 (convert float into int)
    printf("3 divided by 9 will be %f\n", 3.0 / 9); // because (%f) is used so there will be no conversion in the value

    //-----------------------------Main point of arithmetic operation between----------------------------------
    /* int and int -----------> int
       int and float -----------> float
       float and float -----------> float */

    return 0;
}