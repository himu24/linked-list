#include<stdio.h>
//it is used to determine the area to be covered by painting
int main()
{
	int r,c,i,j,ar=0;
	scanf("%d%d",&r,&c);
	int arr[100][100];
	for(i=0;i<r;i++)
	  {for(j=0;j<c;j++)
	    {scanf("%d",&arr[i][j]);}}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(arr[i][j]>=1)
			 ar=ar+2;
		}
		}  
    for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			if(j+1<c)
			{if(arr[i][j]>=arr[i][j+1])
			 ar=ar+arr[i][j]-arr[i][j+1];
			else
			ar=ar+arr[i][j+1]-arr[i][j];}
		}
		ar=ar+arr[i][0]+arr[i][c-1];
		} 
	for(i=0;i<c;i++)
	{
		for(j=0;j<r;j++)
		{
			if(j+1<r)
			{if(arr[j][i]>=arr[j+1][i])
			 ar=ar+arr[j][i]-arr[j+1][i];
			else
			ar=ar+arr[j+1][i]-arr[j][i];}
		}
		ar=ar+arr[0][i]+arr[r-1][i];
		}
	printf("%d",ar);
	return 0;	  	
	        
}
