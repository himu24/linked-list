#include <stdio.h>
int lcm(int a, int b)
{
	int i=1;
	while(i%a != 0 || i%b != 0)
	i++;
	return i;
}
int main()
{
	int a,b,l;
	scanf("%d%d",&a,&b);
	l= lcm(a,b);
	printf("lcm = %d",l);
	return 0;
}