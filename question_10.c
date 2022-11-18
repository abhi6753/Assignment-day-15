//10. Write a function in C to count the frequency of each element of an array.

#include<stdio.h>
#include<conio.h>
int main()
{
	int size,count,key,i,j,k;
	printf("Enter size of an array:\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter %d number:\n",size);
	for(i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<size;i++)
	{
		key=1;count=0;
		for(j=i;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				count++;
			}
		}
		for(k=i-1;k>=0;k--)
		{
			if(arr[i]==arr[k])
			{
				key=0;
				break;
			}
		}
		if(key==1)
		{
			printf("%d occurs %d times\n",arr[i],count);
		}
	}
	getch();
	return 0;
}