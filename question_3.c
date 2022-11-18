//3. Write a function to sort an array of any size. (TSRS)
#include<stdio.h>
#include<conio.h>
void input(int[],int);
void sort(int[],int);
int main()
{
    int size,i;
    printf("Enter size of an array:\n");
    scanf("%d",&size);
    int arr[size]; // problem if we declare besides of size bcz in size variable garbage value  
    input(arr,size); 
    sort(arr,size);
    for(i=0;i<size;i++)
    {
       printf("%d ",arr[i]);
    }
    getch();
    return 0;
}
void input(int b[],int size)
{
    int i;
    printf("Enter %d number:\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&b[i]);
    }
}
void sort(int c[],int size)
{
    int i,j=1,k,l,temp;
    for(i=0;i<size;i++)
    {
        if(c[i]>c[j])
        {
            temp = c[i];
            c[i] = c[j];
            c[j] = temp;
        }
        l= i-1;
        k=i;
        while (l>=0)
        {
            if(c[l]>c[k])
            {
                temp = c[l];
                c[l] = c[k];
                c[k] = temp;
                k--;
            }
            l--;
        }
        j++;        
    }
}
