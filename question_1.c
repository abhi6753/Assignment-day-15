//1. Write a function to find the greatest number from the given array of any size. (TSRS)
#include<stdio.h>
#include<conio.h>
int greatest(int[],int);
int main()
{
    int size,i,arr[size];
    printf("Enter size of array:\n");
    scanf("%d",&size);
    //int arr[size];
    printf("Enter %d elements:\n",size);
    for(i=0;i<size;i++)
    {
       scanf("%d",&arr[i]);
    }
    printf("%d is greatest in entered number",greatest(arr,size));
    getch();
    return 0;
}
int greatest(int a[],int size)
{
    int i,largest;
    largest= a[0];
    for(i=1;i<size;i++)
    {
        if(largest<a[i])
          largest = a[i];
    }
    return largest;
}
