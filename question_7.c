//7. Write a function in C to count a total number of duplicate elements in an array.
#include<stdio.h>
#include<conio.h>
int count_duplicate_element(int[],int);
int main()
{
    int size,i,count;
    printf("Enter size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter %d number:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    count = count_duplicate_element(arr,size);
    printf("Total duplicate elements in this array is %d",count);
    getch();
    return 0;
}
int count_duplicate_element(int b[],int size)
{
    int i,j,count=0,k=0;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
           if(b[k]==b[j])
           {
              count++;
           }
        }
        k++;
    }
    return count;
}