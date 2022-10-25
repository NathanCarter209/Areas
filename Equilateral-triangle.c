//Area of Equilateral Triangle
#include<stdio.h>
#include<math.h>
int main()
{
    float side, area;
    printf("Enter Side : ");
    scanf("%f", &side);
    area = (sqrt(3)/4) * (side * side);
    printf("Area of Equilateral Triangle : %.2f sq. units", area);
    return 0;
}