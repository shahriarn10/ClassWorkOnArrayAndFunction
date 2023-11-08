#include<stdio.h>
#include<stdbool.h>

bool isEven(int n)
{
    if(n%2==0)
    return true;
    else
    return false;
}

int main()  {
    int x;
    printf("Enter a Number ");
    scanf("%d", &x);
    int ret = isEven(x);
    if(ret == 0)
    printf("%d\n", ret);
    else
    printf("%d\n", ret);
    return 0;
}