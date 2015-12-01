#include <stdio.h>

int main(int argc, char const *argv[])
{
	
	int a[] = {1,2,3,4,5,6};

	int *p = &a[1];
	int *q = &a[3];

	int *m;
	m = &a;//m指向的是一个数组空间啊，+sizeof（数组空间大小（6*4））
	m =(int *) &a;//m指向的是一个数组空间啊，+sizeof（数组空间大小（6*4））

	printf("%d\n",p - q);

	printf("%d\n",(int)p - (int)q);

	return 0;

}


char *p = "\x12\x34\x56\x78"; //十六进制字符进行处理
int *q = p;
printf("%x\n",*q );

