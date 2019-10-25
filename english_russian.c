//一个旅行社有 72 人，其中会英语的有 48 人，会俄语的有 36 人，两样都不会的有 8 人，两样都会的有
//_______个。
//编程：输入旅行社有72人
//     输入会英语48人
//     输入会俄语36人
//     输入两样都不会有8人
//     输出两样都会的有   人 
//     输出：输入数据错误，无法计算
#include <stdio.h> 
int main() {
	int TA, E, R, N, B, OE, OR;
	scanf("%d%d%d%d", &TA, &E, &R, &N);
	B = (E + R + N) - TA;
	OE = E - B;
	OR = R - B;
	if(OE < 0||OR < 0)	
	printf("输入数据错误，无法计算");
	else
	printf("%d", B);
	return 0;
}
