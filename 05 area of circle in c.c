 
    //****************************************circle question******************************
    #include<stdio.h>
    int main(){
    int radius;
    int height;
    float pi = 3.14;
    printf("Enter the radius of circle\n");
    scanf("%d",&radius);
     printf("Enter the height of circle\n");
    scanf("%d",&height);
    printf("The area of the circle is %f\n", pi*radius*radius);
    printf("The area of the cylinder is %f\n", pi*radius*radius*height);
    
    return 0;
    }