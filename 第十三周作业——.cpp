//������������������λ���ֵĺͣ���λ���ֵ�ƽ���ͣ�����������

//�� 100~10000 �ڵ����г��������������ǵ�ƽ������
#include <stdio.h>
#define BEGIN 100
#define END 10000
int main() {
	int i, j, a[10000] = {0};  //ѭ����������
	int count_1 = 0,k = 0, count_2 = 0, count_3 = 0,num = 0;  //�������� 
	int place[10] = {0};   //��λ���� 
	int sum = 0, sum_spare = 0; //��
	int temp; //�洢 
	float he = 0;
	for(i = BEGIN; i < END; i++)
	{
		temp = i;
		for(j = 2; j < i; j++){
			if(i % j == 0){
				count_1++;    //�ж����� 
			}
		}
		if(count_1 == 0)
		{
			do{ 
			    place[k]= i % 10;
				i = i / 10;
				k++;
			}while(i >= 1);  //ȡ����λ��place[0]Ϊ���λ; 
			for(j = 0; j < k; j++)
			{
				sum = sum + place[j];  //��λ�� 
			}
			for(j = 2; j < sum; j++)
			{
			   if(sum % j == 0)
			   {
				  count_2++;    //�ж����� 
			   }
			} 
			if(count_2 == 0)
			{
				for(j = 0; j < k; j++)
				{
				    sum_spare = sum_spare + place[j]*place[j];  //��λƽ���� 
			    }
			    for(j = 2; j < sum_spare; j++)
				{
			       if(sum_spare % j == 0)
				    {
				      count_3++;    //�ж����� 
			        }
				}
				if(count_3 == 0)
				{
					a[num] = temp;
					num++;           //����������� 
				}
			}
		}
		count_1 = 0;
		count_2 = 0;
		count_3 = 0;
		k = 0; 
		sum = 0, sum_spare = 0;//���� 
		i=temp;
	}
	for(i=0;i<num;i++)
	{
		printf("%d\n", a[i]); //����������� 
	}
	for(i=0;i<num;i++)
	{
		he= he + a[i];  
	}
	float averge = he / (float)num; //��ƽ���� 
	printf("%f",averge);
	return 0;
} 
