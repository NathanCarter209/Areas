//Area of a square 
#include<stdio.h>
int main()
{
    float s, area;
    printf("Enter lenght of a side : ");
    scanf("%f", &s);
    area = s * s;
    printf("Area of the square : %.2f", area);
    return 0;
}