#include<stdio.h>

#define NAME		"홍길동"
#define AGE			24
#define PRINT_ADDR	puts("주소 : 경기도 용인시\n")

void main1()
{
	printf("이름 : %s\n",NAME);
	printf("나이 : %d\n",AGE);
	PRINT_ADDR;
}