//Area of rectangle
#include<stdio.h>
int main()
{
    float l, b, area;
    printf("Enter lengle and base of rectangle : ");
    scanf("%f %f", &l ,&b);
    area = l * b;
    printf("Area of rectangle : %0.2f", area);
    return 0;
}