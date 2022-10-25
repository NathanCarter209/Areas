//Area of Parallelogram
#include<stdio.h>
int main()
{
    float b,h,area;
    printf("Enter the base and height of parallelogram : ");
    scanf("%f %f", &b, &h);
    area = b * h;
    printf("Area of Parallelogram : %0.2f", area);
    return 0;
}