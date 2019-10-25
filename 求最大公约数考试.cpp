#include <stdio.h> 
int main(void) 
{
    int T, i, m, n, a, b;
	scanf("%d", &T);
	for (i = 0; i < T; i++) 
	{
		scanf("%d%d", &m, &n);
		if(m >= n)
		for (a = 1; a <= n; a++)
		{
			if(m % a == 0&&n % a == 0)
			if(a > b)
			b = a;
		}
		else	
		for (a = 1; a <= m; a++)
		{
			if(m % a == 0&&n % a == 0)
			if(a > b)
			b = a;
		}
	    printf("%d\n", b);
	    b = 1;
	}
	return 0;
}
		
 
