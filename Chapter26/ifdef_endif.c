#include<stdio.h>

#define MIN 0

void main6()
{
	int num1, num2;

	printf("�� ���� ���� �Է� : ");
	scanf_s("%d %d", &num1, &num2);

#ifdef ADD
	printf("%d + %d = %d\n", num1, num2, num1+num2);
#endif 

#ifdef MIN
	printf("%d - %d = %d\n", num1, num2, num1 - num2);
#endif 


}