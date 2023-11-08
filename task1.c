#include<stdio.h>

int add(int a, int b)
{
    int sumOfTwoNumber=a+b;
    return sumOfTwoNumber;
}

int main()  {
    int x, y;
    printf("Enter First Number ");
    scanf("%d", &x);
    printf("Enter Second Number ");
    scanf("%d", &y);
    int sum=add(x,y);
    printf("The Sum of Two Number is %d\n", sum);
    return 0;
}