#include <stdio.h>
#include <stdlib.h>
int arr[100],n;
void swap(int a,int b)
{
	int k;
	k=arr[a];
	arr[a]=arr[b];
	arr[b]=k;
}
void printfun()
{
	int i;
	for(i=1;i<=n;i++)
	printf("%d ",arr[i]);
	printf("\n");
}
void appendheap()
{
	int i,c;
	for(i=1;i<=n;i++)
	{
		c=i;
		while(c>1)
		{
			if(arr[c]>arr[c/2])
			swap(c,c/2);
			c=c/2;
			printfun();
		}
	}
}
void deleteheap()
{
	int i,c,k;
	for(i=n;i>=1;i--)
	{
		c=1;
		k=arr[1];
		arr[1]=arr[i];
		arr[i]=0;
		while(2*c<i)
		{
			if(arr[c*2]<arr[c*2+1])
			{
				if(arr[c*2+1]>arr[c])
				swap(c*2+1,c);
				else
				break;
				c=c*2+1;
			}
			else
			{ if(arr[c*2]>arr[c])
				swap(c*2,c);
				else
				break;
				c=c*2;
		    }
		    printfun();
		}
		arr[i]=k;
	}
}
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	 scanf("%d",&arr[i]);
	printf("\n");
	appendheap();
	printf("\n");
	deleteheap();
	printf("\n");
	for(i=1;i<=n;i++)
	printf("%d ",arr[i]);
	
	return 0;
}
