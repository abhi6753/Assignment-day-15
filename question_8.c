//8. Write a function in C to print all unique elements in an array.
#include<stdio.h>
#include<conio.h>
int main()
{
    int size,i,j,k=0,key;
    printf("Enter number of elements:\n");
    scanf("%d",&size);
	int a[size];
    int b[size];
    printf("Enter %d number:\n");
    while(i<size)
    {
        scanf("%d",&a[i]);  
        i++;
    }
	for(i=0;i<size;i++)
	{   
        b[i]=0;
		key=1;//flag
		for(j=0;j<i;j++)
		{
			if(a[i]==b[j])
			{
				key=0;
				break;
			}
		}
		if(key==1)
		{
			b[k]=a[i];
		    k++;
		}	
	}
	i=0;
    printf("Unique elements are:\n");
	while(i<size)
	{
		if(b[i]!=0) // if value at any index 0 then it fail either in all cases it run
		 printf("%d ",b[i]);
		i++;
	}
	getch();
	return 0;
}