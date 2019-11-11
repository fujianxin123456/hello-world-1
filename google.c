//f(n)函数的定义为0~n中包含的的个数
//f(13)是0~13中包含1的有 1，10，11，12，13，所以f(13)=6
//f(1) = 1。
//求另一个f(n)=n的n值
#include <stdio.h>
int main() 
{
	int n =199990 , a = 1, i, f = 0;
        for(i = 1;i <= n; i++)
           {
               int t = i;
               while(t)
               {
                   if(t % 10 == 1) f++;
                   t/=10;
               }
            }
        if(f == n)
		a = n;  
    printf("%d", a);
	return 0;
}  
