//6. Write a function in C to read n number of values in an array and display it in reverse order
#include<stdio.h>
#include<conio.h>
void input_array(int[],int);
void reverse_array(int[],int);
void display_array(int[],int);
int main()
{
    int size,i;
    printf("Enter size of an array:\n");
    scanf("%d",&size);
    int arr[size];
    input_array(arr,size);
    reverse_array(arr,size);
    display_array(arr,size);
    getch();
    return 0;


}
void input_array(int b[],int size) // b koi new array ni bnega balki arr ko hi use krega to hum keh skte hai
{                                  // b jo h wo arr ka hi dusra name hai lekin sbko alag function me alag name se jaanenge
    int i = 0;
    printf("Enter %d number:\n",size);
    while (i<size)
    {
        scanf("%d",&b[i]);
        i++;
    }
    
}
void display_array(int b[],int size) //b is just name of array arr we can also take another name like c or anything
{
    int i = 0;
    printf("After reverse:\n");
    while (i<size)
    {
        printf("%d ",b[i]);
        i++;
    }
    
}

void reverse_array(int b[],int size)
{
    int i=0,j=size-1;
    while(i<j)
    {
        int temp = b[i];
        b[i]= b[j];
        b[j] = temp;
        i++,j--;
    }
}
