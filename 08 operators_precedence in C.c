#include <stdio.h>

int main(){
   int x = 2;
   int y = 3;

   printf("The value of 3*x - 8*y %d\n",3*x - 8*y);
   printf("The value of 8*y / 3*x %d\n",8*y / 3*x);
   // 8*3 / 3*2 = 24/6 will give wrong answer
   // 24/3*2
   // 8*2
   // 16     Because of left to right associativity it's giving 16 not because of BODMAS

//    priority         operators
//    1st              * / % 
//    2nd              + - 
//    3rd               =

    return 0;
}