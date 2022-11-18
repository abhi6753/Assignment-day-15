/* 4. Write a function to rotate an array by n position in d direction. The d is an indicative
value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and 
d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] ) */
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
void input(int[],int);
void rotate(int[],int);
int main()
{
    int size,i;
    printf("Enter size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    input(arr,size);
    rotate(arr,size);
    for(i=0;i<size;i++)
    {
        printf("%d ",arr[i]);
    }
}
void rotate(int b[],int size)
{
    int n,i,j,temp,count=0;
    char d; //direction
    printf("Enter number of rotation:\n");
    scanf("%d",&n);
    printf("Enter direction to rotate\n(Left for press 'l' OR Right for press 'r':\n");
    fflush(stdin);
    scanf("%c",&d);
    if((d=='l')||(d=='L'))
    {
        while(count<n)
       {
            j=1;
            for(i=0;i<size;i++)
            {
                if(i==0)
                {  
                  temp = b[i];
                }
                b[i]= b[j];
                if(size-1==i)
                {
                  b[i] = temp;
                }
                j++;
            }
            count++;
       }
    }
    else if((d=='r')||(d=='R'))
    {
        while(count<n)
        {
            j=size-n;
            for(i=size-1;i>=0;i--)
            {
                if(i==size-1)
                {
                    temp = b[i];
                }
                b[i] = b[j];
                if(i==0)
                {
                    b[i] = temp; 
                } 
                j--;
            }
            count++;     
        }
    }
    else
    {
       printf("Error!! Invalid input\n");
       exit(0);
    }    
}

void input(int b[],int size)
{
    int i=0;
    printf("Enter %d number:\n",size);
    while (i<size)
    {
       scanf("%d",&b[i]);
       i++;
    }
}
