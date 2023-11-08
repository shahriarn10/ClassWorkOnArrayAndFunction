#include<stdio.h>
#include<math.h>

#define PI 3.141592653

double findArea(int r)
{
    double area=PI*r*r;
    return area;
}

int main()  {
    int x, y;
    printf("Enter First Circle Radius ");
    scanf("%d", &x);
    printf("Enter Second Circle Radius ");
    scanf("%d", &y);
    double area1=findArea(x);
    double area2=findArea(y);
    //printf("The Area of First Circle is %lf\n", area1);
    //printf("The Area of Second Circle is %lf\n", area2);
    if(area1>area2)
    printf("The Area of Greater circle is %lf\n", area1);
    else if(area1<area2)
    printf("The Area of Greater circle is %lf\n", area2);
    else
    printf("Both are same.\n");
    return 0;
}