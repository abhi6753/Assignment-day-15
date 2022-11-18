//2. Write a function to find the smallest number from the given array of any size. (TSRS)
#include<stdio.h>
#include<conio.h>
int smallest(int[],int);
int main()
{
    int size,arr[size],i;
    printf("Enter size of an array:\n");
    scanf("%d",&size);
    printf("Enter %d elements:\n",size);
    for(i=0;i<size;i++)
    {
      scanf("%d",&arr[i]);
    }
    printf("%d is samllest number\n",smallest(arr,size));
    getch();
    return 0;
}
int smallest(int b[],int size)
{
    int i, smallest=b[0];
    for(i=1;i<size;i++)
    {
        if(smallest>b[i])
           smallest = b[i];
    }
    return smallest;
}