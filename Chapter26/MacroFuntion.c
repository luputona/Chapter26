#include<stdio.h>

#define SQUARE(X)		((X)*(X))
int main2()
{
	int num = 20;

	//정상적 결과
	printf("Square of num : %d \n", SQUARE(num));
	printf("Square of num : %d \n", SQUARE(-5));
	printf("Square of num : %g \n", SQUARE(2.5));

	//비정상적 결과
	printf("Square of num : %d \n", SQUARE(3+2));
}