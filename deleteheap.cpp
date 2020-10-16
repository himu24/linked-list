#include <stdio.h>
#include <stdlib.h>
int arr[100],n;

void swap(int a,int b)
{
	arr[a]=arr[a]+arr[b];
	arr[b]=arr[a]-arr[b];
	arr[a]=arr[a]-arr[b];
}
void printfun()
{
	int i;
	for(i=1;i<=n;i++)
	printf("%d ",arr[i]);
	printf("\n");
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
		}
		arr[i]=k;
		printfun();
	}
}
int main()
{
	int i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	scanf("%d",&arr[i]);
	deleteheap();
	
	return 0;
}
