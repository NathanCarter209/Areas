//Area of a tringle
#include<stdio.h>
int main()
{
    float h, b ,area;
    printf("Enter the height : ");
    printf("Enter the base : ");
    scanf("%f %f", &h, &b);
    area = (b*h) / 2;
    printf("Area od the tringle : %0.2f", area);
    return 0;
}