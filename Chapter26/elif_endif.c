#include<stdio.h>

#define HIT_NUM	7

void main8()
{
#if HIT_NUM == 5
	puts("매크로 상수 HIT_NUM은 현재 5 입니다. \n");
#elif HIT_NUM == 6
	puts("매크로 상수 HIT_NUM은 현재 6 입니다. \n");
#elif HIT_NUM == 7
	puts("매크로 상수 HIT_NUM은 현재 7 입니다. \n");
#else
	puts("매크로 상수 HIT_NUM은 현재 5,6,7은 확실히 아닙니다. \n");
#endif

}