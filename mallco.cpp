#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;

void Getmemory(char *p,int num)
{
	p = (char*)malloc(sizeof(char)*num);
}
void Getmemory2(char* *p,int num)
{
	*p = (char*)malloc(sizeof(char)*num);
}
char* Getmemory3(char *p,int num)
{
	p = (char*)malloc(sizeof(char)*num);
	return p;
}
void Getmemory4(int *p)
{
	*p = 55;
}
int main(int argc, char const *argv[])
{
	char *src = NULL;
	char *src2 = NULL;
	char *src3 = NULL;
	
//	Getmemory(src,100);//段错误
	Getmemory2(&src2,100);
	src3 = Getmemory3(src3,100);
	
	printf("******************\n");
	
//	src = strcpy(src,"hello");//段错误
	src2 = strcpy(src2,"how old are u?");
	src3 = strcpy(src3,"i am fine,thank u");
	
//	cout << src << endl;
	cout << src2 << endl;
	cout << src3 << endl;

	int _num;
	Getmemory4(&_num); //一个整数如何分配内存空间。
	cout << _num << endl;

	return 0;
}
// //src传入Getmemory中的是src的一份拷贝，传入之后，p分配的内存，只是把p所指的
// 内存地址改变了，但是str丝毫没有改变。函数Getmemory没有返回值，p分配的内存地址没办法返回出来，
// src则不能指向p所申请的内存。
// Getmemory每一次都会申请一块内存，但是这块内存并没有人会使用，所以基本上是废的。大家都不会使用更谈不上释放这块内存了。
// 长期如此，那么将会造成严重的内存泄漏。
//上面三个函数是三种分配内存的方法，显而易见第一种肯定是错误的，当你把一个变量传入到函数中去的时候，你要
// 明白一件事情，那就是你放入的只是提供一个信息，还是你想要改变这个变量。如果你想改变这个变量，你就要明白
// 你所申请的变量在传入参数的时候仅仅是一种拷贝。这个时候如果你想解决这个问题有两种方法，第一种就是
// 利用返回值的方法，将需要改变的变量返回回来。
// 第二种是利用传递变量地址的方法，你把你要改变的变量的地址传进函数中去，你所看到的将会是函数对你所传入
// 的这个地址进行了一系列操作，当你再次访问这个地址的时候，你会发现，一切都改变了。就像你当初预料的那样。
//malloc 
// 语法: 

 
//   #include <stdlib.h>
//   void *malloc( size_t size );
 

// 功能： 函数指向一个大小为size的空间，如果错误发生返回NULL。 存储空间的指针必须为堆，不能
//是栈。这样以便以后用free函数释放空间。例如: 

//     typedef struct data_type {
//       int age;
//       char name[20];
//     } data;
    
//     data *bob;
//     bob = (data*) malloc( sizeof(data) );
//     if( bob != NULL ) {
//       bob->age = 22;
//       strcpy( bob->name, "Robert" );
//       printf( "%s is %d years old\n", bob->name, bob->age );
//     }
//     free( bob );
