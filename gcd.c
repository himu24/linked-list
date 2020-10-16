#include <stdio.h>
int gcd(int a,int b)
{
	int i=1,g;
	while(i<=a && i<=b)
	{
		if(a%i==0 && b%i ==0)
		g=i;
		i++;
	}
	return g;
}
int main()
{
	int a[30],n,g,i;
	scanf("%d",&n);
	scanf("%d%d",&a[0],&a[1]);
	for(i=2;i<n;i++)
	scanf("%d",&a[i]);
	g=gcd(a[0],a[1]);
	for(i=2;i<n;i++)
	g=gcd(a[i],g);
	printf("gcd = %d ", g);
	return 0;
}
