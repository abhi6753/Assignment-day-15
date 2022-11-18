//5. Write a function to find the first occurrence of adjacent duplicate values in the array.\
Function has to return the value of the element.
#include<stdio.h>
#include<conio.h>
int check_Duplicasy(int [],int);
void input(int [],int );
int main()
{
    int size;
    printf("Enter size of array:\n");
    scanf("%d",&size);
    int arr[size];
    input(arr,size);
    printf("Adjacent Duplicate element is %d ",check_Duplicasy(arr,size));
    getch();
    return 0;
}
int check_Duplicasy(int b[],int size)
{
    int i,j,k=0;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(b[k]==b[j]&&i==j-1)
            {
                return b[k];
            }
        }
        k++;
    }
    return 0;
}
void input(int b[],int size)
{
    int i=0;
    printf("Enter %d number:\n",size);
    while(i<size)
    {
        scanf("%d",&b[i]);
        i++;
    }
}