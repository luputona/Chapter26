#include<stdio.h>

#define HIT_NUM	7

void main8()
{
#if HIT_NUM == 5
	puts("��ũ�� ��� HIT_NUM�� ���� 5 �Դϴ�. \n");
#elif HIT_NUM == 6
	puts("��ũ�� ��� HIT_NUM�� ���� 6 �Դϴ�. \n");
#elif HIT_NUM == 7
	puts("��ũ�� ��� HIT_NUM�� ���� 7 �Դϴ�. \n");
#else
	puts("��ũ�� ��� HIT_NUM�� ���� 5,6,7�� Ȯ���� �ƴմϴ�. \n");
#endif

}