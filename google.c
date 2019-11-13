//f(n)函数的定义为0~n中包含的的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include <stdio.h>
int main() {
	int i, n, f = 1, a = 0;
	for(n = 1; f == 1; n++)
	{	
		i = n;
		while(i)
		{
		    if(i % 10 == 1)	
		   {
		    a = a + 1;
 	       }
		    i = i / 10;
	    }
	    printf("%d %d\n", n, a);
	    if(n == a)
	    f = a;
	}
	return 0;
}
 


