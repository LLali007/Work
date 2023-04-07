#include <stdio.h>
#include <stdlib.h>
#include <math.h>
double square_area(double a)
{
    return a*a;
}
double square_perimeter(double a)
{
    return 4*a;
}
double circle_area(double r)
{
    return r*r*3.14159;
}
double circle_perimeter(double r)
{
    return 2*r*3.14159;
}
int main()
{
    int num=0;
    double a=0,r=0;

    printf("Choose the figure:\n");
    printf("Press 1 for square|\n");
    printf("Press 2 for circle|\n");
    scanf("%d",&num);

    switch(num)
    {
    case 1:
        scanf("%lf",&a);
        printf("Area is %.2lf\n",square_area(a));
        printf("Perimeter is %.2lf\n",square_perimeter(a));
    case 2:
        scanf("%lf",&r);
        printf("Area is %.2lf\n",circle_area(r));
        printf("Perimeter is %.2lf\n",circle_perimeter(r));
    }

    return 0;
}
