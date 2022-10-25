//Area of triangle using Heron's formula
#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c,s,area;
    printf("\nEnter three sides : ");
    scanf("%f %f %f", &a,&b,&c);
    s=(a*b*c)/2;
    area = sqrt(s*(s-a)*(s-b)*(s-c));
    printf("\n Area of tringle = %6.2f Sq.Units", area);
    return 0;
}