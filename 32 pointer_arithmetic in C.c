#include<stdio.h>

int main(){
    // int i = 34;
    // int *ptr = &i;
    // printf("The value of ptr is %u\n", ptr);
    // // ptr = ptr - 1;
    // ptr = ptr + 1;
    // // ptr--;
    // // ptr--;
    // // ptr++;
    // // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    // char c = '3';
    // char *ptr = &c;
    // printf("The value of ptr is %u\n", ptr);
    // // ptr = ptr - 1;
    // ptr = ptr + 1;
    // ptr = ptr + 1;
    // // ptr--;
    // // ptr--;
    // // ptr++;
    // // ptr++;
    // printf("The value of ptr is %u\n", ptr);

    float f = 3.4f;
    float *ptr = &f;
    printf("The value of ptr is %u\n", ptr);
    // ptr = ptr - 1;
    ptr = ptr + 1;
    ptr = ptr + 1;                                       
    // ptr--;
    // ptr--;
    // ptr++;
    // ptr++;
    printf("The value of ptr is %u\n", ptr);


    return 0;
}