#include <stdio.h>
int main()
{
    int a = 4; // This format is used to assgin a integer value to a variable
    // int b = 7.3; this is wrong because int only use for integer value and 7.5 is real value
    float b = 7.3;
    // int used for integer variables  ----> 1,2,3,6,7
    // float is used for real variables -----> 3.4,5.8,9.6
    // char is used for character variables which should be in singl coat ''
    // ----------> 'A','D'
    char c = 'u';
    printf("The value of a is %d \n", a); // %d is used to print any integers
    printf("The value of a is %f \n", b); // %f is used to print real variable
    printf("The value of a is %c \n", c); // %c is used to print character variable

    return 0;
}
