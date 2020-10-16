#include <stdio.h>
int main()
{
	static int n,i,j,arr[100][100],c=0;
	printf("Give me odd no. I will make a magic square :");
	scanf("%d",&n);
	i=0;j=(n-1)/2;
	while(c!=n*n)
	{c++;
		arr[i][j]=c;
		i--;j++;
		if(i<0 && j>n-1)
		{i=i+2;j--;}
		else if(i<0)
		i=i+n;
		else if(j>n-1)
		j=j%n;
		else if(arr[i][j]>0)
		{i=i+2;j--;}
	}
	printf("your magic square\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			if(arr[i][j]<10)
			printf("0%d  ",arr[i][j]);
			else
			printf("%d  ",arr[i][j]);
			}
		printf("\n");
	 }
	 printf("Magic number : %d",n*(n*n+1)/2);
	return 0;
}
