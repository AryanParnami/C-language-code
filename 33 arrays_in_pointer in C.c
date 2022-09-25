#include<stdio.h>

int main(){
    int marks[4];
    int *ptr;
    //ptr = &mark[0];
    ptr = marks;
    for(int i=0;i<4;i++){
        printf("Enter the value of mark of student %d:\n",i+1);
        scanf("%d",ptr);
        ptr ++;
    }
    for(int i=0;i<4;i++){
        printf("The value of mark of student %d is %d:\n",i+1,marks[i]);
    }
    return 0;
}