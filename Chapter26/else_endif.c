#include<stdio.h>

#define HIT_NUM	5

void main7()
{
#if HIT_NUM == 5
	puts("매크로 상수 HIT_NUM은 현재 5 입니다. \n");
#else
	puts("매크로 상수 HIT_NUM은 현재 5가 아닙니다. \n");
#endif

}