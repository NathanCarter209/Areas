//Area of Rhombus
#include<stdio.h>
int main()
{
    float d1, d2, area;
    printf("Enter the value for Diagonal1 and Diagonal2 : ");
    scanf("%f %f", &d1, &d2);
    area = 0.5 * d1 * d2;
    printf("Area of Rhombus :%0.2f", area);
    return 0;
}