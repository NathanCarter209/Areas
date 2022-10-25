//Area of Trapezium
#include<stdio.h>
int main()
{
    float a, b, h, area;
    printf("Enter a(base), base and height : ");
    scanf("%f %f %f", &a, &b, &h);
    area = 0.5 * h *(a+b);
    printf("Area of Trapezium : %0.2f", area);
    return 0;
}