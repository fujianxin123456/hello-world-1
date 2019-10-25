//Ωªªª≈≈–Ú
#include <stdio.h>
int main() 
{
    int x[3], i,j;
    scanf("%d %d %d", &x[0], &x[1], &x[2]);
    for(j = 0; j < 2; j++)
	{
		for(i = 0;i < 2 - j;i++)
		{
         if( x[i] > x[i+1])
		 {
		    int temp = x[i];
  	        x[i] = x[i+1];
  	        x[i+1] = temp;
	     }
        }
    }
    printf(" %d, %d, %d", x[0], x[1], x[2]);
    return 0;
}
