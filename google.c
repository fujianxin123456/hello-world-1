//f(n)�����Ķ���Ϊ0~n�а����ĵĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ
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
