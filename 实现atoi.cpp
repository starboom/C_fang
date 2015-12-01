#include <iostream>

using namespace std;

int my_atoi(char const *s)
{
	char  const *tmp = NULL;
	char c;
	int i = 0;
	int n = 0;
	tmp = s;
	int len = strlen(tmp);
	for(n = 0;n < len ;n++)
	{
		c = *tmp++;
		if(c >= '0' && c <= '9')
		{
			i = i * 10 + (c - '0');
		}
		else
			continue;
	//	return -1;	
	}
	return i;
}
//先把一个字符串分接成为单个字符进行判断
//每个字符判断是否处于0 --- 9
//把处于0 ---9 的字符 转换成为整数 
// i = i * 10 + c - ‘0’

int main(int argc, char const *argv[])
{
	char s[10];
	cout << "please input a char :  " << endl;

	cin >> s;


	int num;
	num = my_atoi(s);
	cout << num << endl;	
	return 0;
}

// 如何用函数实现atoi：
// 首先我们应该明白拿到一个任务，从本质上剖析我们将要实现什么功能。
// 语法:
//   #include <stdlib.h>
//   int atoi( const char *str );
 

// 功能：将字符串str转换成一个整数并返回结果。参数str 以数字开头，
//当函数从str 中读到非数字字符则结束转换并将结果返回。例如，

//     i = atoi( "512.035" );
// i 的值为 512.

