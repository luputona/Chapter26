#include<stdio.h>

#define PI 3.14
#define PRODUCT(X,Y)	((X)*(Y))
#define CIRCLE_AREA(R)	(PRODUCT((R),(R))* PI)

void main3()
{
	double rad = 2.1f;
	printf("������ %g�� ���� ���� : %g \n",rad, CIRCLE_AREA(rad));
}