//Find the area of a circle
#include<stdio.h>
int main()
{
    float area, r ;
    printf("Enter your Radius : ");
    scanf("%f", &r);
    area = (22/7) * r * r;
    printf("Area of the circle in : %.02f\n", area);
    return 0;
}