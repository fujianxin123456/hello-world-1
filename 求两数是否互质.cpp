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
	printf("%d和%d互质",a,b);
	else
	printf("%d和%d不互质",a,b);
	return 0;
}
