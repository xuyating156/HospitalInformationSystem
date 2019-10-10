#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

/*随机码产生函数*/
void RandomCode(char Rcode[])
{
	int i;
	srand((unsigned int)time(NULL));
	for(i = 0;i < 3;++i)
	Rcode[i] = rand()%10 + '0';
	Rcode[i] = '\0';
}

/*登陆函数，判断信息是否匹配，若匹配返回1，否则返回0*/
int LandedApp(void)
{   char password1[10]={'a','d','m','i','n'} ;
	char password2[10]={'a','d','m','i','n','1','2','3'} ;
	char name[10] = {0};
	char pword[10] = {0};
	char Rcode[4] = {0};
	char rcode[4] = {0};
	printf("\t\t      @@  用户名 : ");
	gets(name);
	printf("\t\t      @@  密码 : ");
	gets(pword);
	RandomCode(Rcode);
	printf("\t\t      @@  随机码 :%s \r\n",Rcode);
	printf("\t\t      @@  请输入随机码 : ");
	gets(rcode);
	if(strcmp(name, password1) != 0 || strcmp(pword, password2) != 0 || strcmp(rcode, Rcode) != 0)
	return 0;
	else
	return 1;
}

void mainmeun()//主菜单 
{
	printf("\n");
	printf("\t\t\t      欢迎进入医院管理系统\n");
	printf("\t\t      ************************************\n");
	printf("\t\t\t\t1.注册新病人信息\n");
	printf("\t\t\t\t2.查询病人信息\n");
	printf("\t\t\t\t3.写病历\n");
	printf("\t\t\t\t4.病人消费\n");
	printf("\t\t\t\t5.列出所有病人信息\n");
	printf("\t\t\t\t6.修改病人病历信息\n");
	printf("\t\t\t\t7.查询药品库存\n");
	printf("\t\t\t\t8.离开\n");
	printf("\t\t      ************************************\n");
}

char chose()//选择菜单 
{
	node1 *head=NULL,*p;
	node2 temp;
    temp = init(temp);//初始化 
	while(1)
	{
		mainmeun();
		int a;
	    scanf("%d",&a);
		switch(a)
		{
		case 1:
		    p=create(head);
			head=insert(head,p);
			break;
		case 2:
			system("cls"); 
			search(head);
			break;
		case 3:
			system("cls"); 
			bingli(head);
			break;
		case 4:
			system("cls"); 
			temp=buy(head,temp);
			break;
		case 5:
			system("cls"); 
			list(head); 
			break;
		case 6:
			system("cls"); 
			modify(head); 
			break;
		case 7:
			system("cls");
			liststock(temp); 
			break;
		case 8:
			printf("谢谢使用！祝您永远健康，再见！\n");
	        return(0);
			break;
		default:
			printf("输入有误，重新输入\n");
			break;
		}
	}
}


