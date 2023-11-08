#include<stdio.h>

float calculateAverage(float a, float b)
{
    float sumOfTwoNumber=a+b;
    float average=sumOfTwoNumber/2;
    return average;
}

int main()  {
    float x, y;
    printf("Enter First Number ");
    scanf("%f", &x);
    printf("Enter Second Number ");
    scanf("%f", &y);
    float avg=calculateAverage(x,y);
    printf("The Average of Two Number is %.2f\n", avg);
    return 0;
}