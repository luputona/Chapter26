#include<stdio.h>

#define DIFF_ABS(x, y)	((x)>(y) ? (x) - (y) : (y) - (x))

void main4()
{
	printf("두 값의 차 : %d \n", DIFF_ABS(5,7));
	printf("두 값의 참 : %g \n", DIFF_ABS(1.8, -1.4));

}