/*#include <stdio.h>

int main(int argc, char const *argv[])
{
	char a,b;
	
	while(getchar() != '\n')
	{
		a = getchar();
	//	printf("a = %c\n  b = %c\n",a,b);
	//	b = getchar();
	}

	while(getchar() != '\n')
	{
	//	printf("a = %c\n  b = %c\n",a,b);
		b = getchar();
	}
	printf("a = %c\n  b = %c\n",a,b);
	return 0;
}*/
#include <stdio.h>
 int main()
 {
     int n,m;
     char ch,c;
     do{
         printf("请输入一个三位整数：");
         scanf("%d",&n);
         if(n>99 && n<1000){
             m=(n%10)*100 + ((n/10)%10)*10 + (n/100);
             printf("%d\n",m);
         }
         else
             printf("超出范围！！！输入错误\n");      
                      printf("是否继续输入Y/N：\n");
            scanf("%c",&ch);
         
         }while(ch=='y' || ch == 'Y');
     return 0;
 }
/*Y/N：scanf("%s",&ch);改为scanf("%c",&ch);就不能够循环
%s是输入字符串，%c是输入单个字符。
 在%c情况下，
 当输入123后，楼主会敲击回车，这个时候，回车就相当于一个字符，再执行 scanf("%s",&ch);这时就把\n赋值给了ch；再判断while(ch=='y' || ch == 'Y');
显然不成立，故而导致循环结束。
 楼主可以把while(ch=='y' || ch == 'Y');改成：while(ch=='\n' || ch == 'Y');试试就知道原因了*/
