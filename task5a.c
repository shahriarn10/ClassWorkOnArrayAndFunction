#include<stdio.h>

int findMin(int arr[] , int size){
    int min = arr[0];
    for(int i=0; i<size; i++ ){
        if(arr[i]<min){
            min=arr[i];
        }
    }
    return min;
}
int findMax(int arr[] , int size){
    int max = arr[0];
    for(int i = 0; i < size; i++ ){
        if(arr[i] > max){
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int arr[]={6, 14, 21, 7, 2, 11, 8, 9};
    int size = sizeof(arr)/sizeof(arr[0]);

    int min = findMin(arr,size);
    int max = findMax(arr,size);

    printf("The Minimum Value of the Array is %d\n", min);
    printf("The Maximum Value of the Array is %d\n", max);
    return 0;
}