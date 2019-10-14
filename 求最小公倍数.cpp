#include <stdio.h> 
int main(void)
{
	int a=3,b=4;
	int x=0;
	int i;
	for(i=0;x==0;i = i+1)
{
	if(i % a==0&&i % b==0)
	x=i;
}
	printf("最小公倍数是: %d",x);
	return 0;
}
