//超级素数：它本身，各位数字的和，各位数字的平方和，都是素数。

//求 100~10000 内的所有超级素数，及它们的平均数。
#include <stdio.h>
#define BEGIN 100
#define END 10000
int main() {
	int i, j, a[10000] = {0};  //循环计数变量
	int count_1 = 0,k = 0, count_2 = 0, count_3 = 0,num = 0;  //计数变量 
	int place[10] = {0};   //各位数字 
	int sum = 0, sum_spare = 0; //和
	int temp; //存储 
	float he = 0;
	for(i = BEGIN; i < END; i++)
	{
		temp = i;
		for(j = 2; j < i; j++){
			if(i % j == 0){
				count_1++;    //判断素数 
			}
		}
		if(count_1 == 0)
		{
			do{ 
			    place[k]= i % 10;
				i = i / 10;
				k++;
			}while(i >= 1);  //取出各位，place[0]为最低位; 
			for(j = 0; j < k; j++)
			{
				sum = sum + place[j];  //各位和 
			}
			for(j = 2; j < sum; j++)
			{
			   if(sum % j == 0)
			   {
				  count_2++;    //判断素数 
			   }
			} 
			if(count_2 == 0)
			{
				for(j = 0; j < k; j++)
				{
				    sum_spare = sum_spare + place[j]*place[j];  //各位平方和 
			    }
			    for(j = 2; j < sum_spare; j++)
				{
			       if(sum_spare % j == 0)
				    {
				      count_3++;    //判断素数 
			        }
				}
				if(count_3 == 0)
				{
					a[num] = temp;
					num++;           //求出超级素数 
				}
			}
		}
		count_1 = 0;
		count_2 = 0;
		count_3 = 0;
		k = 0; 
		sum = 0, sum_spare = 0;//清零 
		i=temp;
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n", a[i]); //输出超级素数 
	}
	for(i=0;i<num;i++)
	{
		he= he + a[i];  
	}
	float averge = he / (float)num; //求平均数 
	printf("%f",averge);
	return 0;
} 
