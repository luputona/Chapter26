#include<stdio.h>

#define DIFF_ABS(x, y)	((x)>(y) ? (x) - (y) : (y) - (x))

void main4()
{
	printf("�� ���� �� : %d \n", DIFF_ABS(5,7));
	printf("�� ���� �� : %g \n", DIFF_ABS(1.8, -1.4));

}