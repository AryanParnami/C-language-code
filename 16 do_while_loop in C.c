#include <stdio.h>

int main(){
    int i = 0;
    // *************************quick quiz********************************************
    int n;
    printf("Enter the value of n\n");
    scanf("%d", &n);
    
    //do while loop first exceutes the code & then checks the condition
    // if the condition is not true then also it will be run once 
    
     
    do{
        printf("The value of i is %d\n",i+1);
        i++;
    }while(i < n);

   


    return 0;
}