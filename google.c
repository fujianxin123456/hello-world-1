//f(n)�����Ķ���Ϊ0~n�а����ĵĸ���
//f(13)��0~13�а���1���� 1��10��11��12��13������f(13)=6
//f(1) = 1��
//����һ��f(n)=n��nֵ
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
 


