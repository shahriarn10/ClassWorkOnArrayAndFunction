#include<stdio.h>
int countOccurrence(int arr[],int size,int target)
{
    int count =0;
    for(int i=0; i<size; i++)
    {
        if(arr[i]==target)
        {
            count++;
        }
    }
    return count;
}
int main()
{
    int arr[]= {5,2,4,6,3,4,7,5,5};
    int size=sizeof(arr)/sizeof(arr[0]);
    int target;
    printf("Enter the integer to count:");
    scanf("%d",&target);
    int occurrence=countOccurrence(arr,size,target);
    printf("The integer %d appears in the array %d times.\n",target,occurrence);
    return 0;
}
