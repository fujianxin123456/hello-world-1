#include <stdio.h> 
int main(void)
{
	int a=23,b=35;
	int x=0;
	int i;
	for(i=1;i<=a;i = i+1)
	{
		if(a % i==0&&b % i==0)
		x=i;
	}
	if(x==1)
	printf("%d��%d����",a,b);
	else
	printf("%d��%d������",a,b);
	return 0;
}
