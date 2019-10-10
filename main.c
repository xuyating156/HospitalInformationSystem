#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

int main(int argc,char** argv)
{
	int  i, j, k, l, m;	
	char c = '@';				
		printf("\n");	//开头空出5行 
	for(i=1; i<=3; i++) 
	{ 
		for(j=1; j<=32-2*i; j++)		
			printf(" ");	//左边的空格，每下一行左边的空格比上一行少2个 //8*n-2*i 

		for(k=1; k<=4*i+1; k++)		
			printf("%c", c);//输出左半部分字符小爱心 

		for(l=1; l<=13-4*i; l++)		
			printf(" ");	//中间的空格，每下一行的空格比上一行少4个 

		for(m=1; m<=4*i+1; m++)		
			printf("%c", c);//输出右半部分字符小爱心

		printf("\n");		//每一行输出完毕换行 
	}
	
	for(i=1; i<=3; i++) 
	{	//下3行中间没有空格 

		for(j=1; j<=24+1; j++)			
			printf(" ");	//左边的空格 //8*(n-1)+1

		for(k=1; k<=29; k++)			
			printf("%c", c);//输出字符小爱心

		printf("\n");		//每一行输出完毕换行
	}

	for(i=7; i>=1; i--) 
	{	//下7行 

		for(j=1; j<=40-2*i; j++)		
			printf(" ");	//左边的空格，每下一行左边的空格比上一行少2个//8*(n+1)-2*i

		for(k=1; k<=4*i-1; k++)		
			printf("%c", c);//每下一行的字符小爱心比上一行少4个（这个循环是i--） 

		printf("\n");		//每一行输出完毕换行
	}

	for(i=1; i<=39; i++)				
		printf(" ");	//最后一行左边的空格 

	printf("%c\n", c);		//最后一个字符小爱心 
				
	printf("\n");	//最后空出5行 
	
	//	用户名：admin, 密码：admin123
	int count = 3; //只可输入3次
	printf("\t\t      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\r\n");
	puts("\t\t      @@  请输入用户名、密码和随机码");
	while(count!=0)
	{
		if(LandedApp() == 1)
		{
			printf("\t\t      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\r\n");
					puts("\n\t\t\t\t  成功登陆 ！");
					chose();
					break;

		}	
		else
			printf("\t\t      @@  错误的用户名或密码或随机码，请重新输入，您还有%d次机会：\r\n",--count);	 
    }
	while(count==0)
	{ 
		puts("\n\t\t\t\t  登录失败 ！");
		break;
	}	
}


