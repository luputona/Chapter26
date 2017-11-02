#include<stdio.h>

#define ADD	1
#define MIN 0

void main5()
{
	int num1, num2;

	printf("두 개의 정수 입력:");
	scanf_s("%d %d", &num1, &num2);

#if ADD
	printf("%d + %d = %d \n", num1, num2, num1 + num2);
#endif
#if MIN
	printf("%d - %d = %d \n", num1, num2, num1 - num2);
#endif	

}