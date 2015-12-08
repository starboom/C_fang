#include <stdio.h>

typedef int A[5]; //类型告知 需要分配多大的空间


int main(int argc, char const *argv[])
{


	// A *p;
	int (*p)[5];
//	A a1 = {1,2,3,4,5};
	int a1[5] = {1,2,3,4,5};
	p = &a1;

	printf("a1 = %d\n", a1);
		printf("a1+1 = %d\n", a1+1);

	printf("&a1 = %d\n",&a1 );
		printf("&a1+1 = %d\n", (&a1)+1);
	
	int i;
	for(i = 0;i<5;i++)
	{
		printf("a[%d] = %d\n",i,a1[i] );

	}
	printf("%d\n",*(*p+1) );
	// // A (*p)[2];
	// // A (*p)[5];
	// int (*p)[5];  
	// A a1[2];//两行五列 // int a1[2][5];
	// p = a1;
	// int i,j;
	// for(i = 0;i<5;i++)
	// {
	// 	for(j=0;j<2;j++)
	// 	{
	// 		a1[i][j] = i+j;
	// 	}
	// }

	// for(i = 0;i<5;i++)
	// {
	// 	for(j=0;j<2;j++)
	// 	{
	// 		printf("%d\n",p[i][j] );
	// 	}
	// }
	return 0;

}
// [root@localhost day20151208]# gcc zhizhen2.c 
// [root@localhost day20151208]# ./a.out 
// a1 = -1079082840
// a1+1 = -1079082836
// &a1 = -1079082840
// &a1+1 = -1079082820
// a[0] = 1
// a[1] = 2
// a[2] = 3
// a[3] = 4
// a[4] = 5
// 2
