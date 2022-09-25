#include <stdio.h>

int main(){
    int i = 5;
     printf("The value after i++ is %d\n", i++); //if we use i++ so first it will
    // print then increment the value of i
    printf("The value of i after increment is %d\n", i);

    // but if we use ++i then it will first increment it's value then 
    // print the  other stuff
    printf("The value after ++i is %d\n", ++i);
    printf("The value of i after increment is %d\n", i); // wil print 7 because i got 
    // incremented twice
    i += 10; // will increment the value of i by 10 
    printf("The value of i is %d\n", i);
    return 0;
}