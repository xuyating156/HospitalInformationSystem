#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

node2 init(node2 temp)//药品价格、库存 
{
	temp.amount[0]=20;
    temp.amount[1]=35;
	temp.amount[2]=10;
	temp.amount[3]=50;
    temp.amount[4]=20;
	temp.amount[5]=30;
	temp.amount[6]=40;
    temp.amount[7]=45;
	temp.amount[8]=10;
	temp.amount[9]=60;
    
	temp.price[0]=5;
	temp.price[1]=9;
	temp.price[2]=16;
	temp.price[3]=20;
    temp.price[4]=20;
	temp.price[5]=10;
	temp.price[6]=20;
    temp.price[7]=20;
	temp.price[8]=10;
	temp.price[9]=20;
	return temp;
}

node2 buy(node1 *p,node2 temp)//病人消费（买药） 
{
	char i[10];
	printf("请输入病人ID\n");
	scanf("%s",i);
	while(p->ID&&strcmp(p->ID,i))
	{
		p=p->next;
	}
	if(p==NULL)
	printf("尚无病人信息\n");
	else
	{
	while(1)
	{
		int a,b,c,d,e,f,g,h,i,j,k;
		printf("1.购买巴米尔\n");
		printf("2.购买感冒灵\n");
		printf("3.购买病毒灵\n");
		printf("4.购买脂肪乳\n");
		printf("5.购买谷维素\n");
		printf("6.购买芬必得\n");
		printf("7.购买胰岛素\n");
		printf("8.购买酚酞片\n");
		printf("9.购买护肝片\n");
		printf("10.购买多巴胺\n");
		printf("0.退出\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				do
				{
					printf("现有库存%d\n",temp.amount[0]);
					printf("购买巴米尔数量:");
					scanf("%d",&b);
					if(b>temp.amount[0]) 
					{
						printf("库存不足，请重新输入\r\n") ;
						scanf("%d",&b);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********购买成功********\r\n");
					}
					temp.amount[0]=temp.amount[0]-b;
					p->cost[0]+=b*5;
				}while(b>20);
				break;
			case 2:
				do
				{
					printf("现有库存%d\n",temp.amount[1]);
					printf("购买感冒灵数量:");
					scanf("%d",&c);
					if(c>temp.amount[1]) 
					{
						printf("库存不足，请重新输入\r\n") ;
						scanf("%d",&c);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t*************购买成功*************\r\n");
					}
					temp.amount[1]=temp.amount[1]-c;
					p->cost[1]+=c*9;
				}while(c>35);
				break;
			case 3:
				do
				{
					printf("现有库存%d\n",temp.amount[2]);
					printf("购买病毒灵数量:");
					scanf("%d",&d);
					if(d>temp.amount[2]) 
					{
						printf("库存不足，请重新输入\r\n") ;
						scanf("%d",&d); 
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********购买成功********\r\n");
					}
					temp.amount[2]=temp.amount[2]-d;
					p->cost[2]+=d*16;
				}while(d>10);
				break;
			case 4:
				do
				{
					printf("现有库存%d\n",temp.amount[3]);
					printf("购买脂肪乳数量:");
					scanf("%d",&e);
					if(e>temp.amount[3]) 
					{
						printf("库存不足，请重新输入\r\n") ;
						scanf("%d",&e);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********购买成功********\r\n");
					}
					temp.amount[3]=temp.amount[3]-e;
					p->cost[3]+=e*20;
				}while(e>50);
				break;
			case 5:
				do
				{
					printf("现有库存%d\n",temp.amount[4]);
					printf("购买谷维素数量:");
					scanf("%d",&f);
					if(f>temp.amount[4]) 
					{
						printf("库存不足，请重新输入\r\n") ;
						scanf("%d",&f);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********购买成功********\r\n");
					}
					temp.amount[4]=temp.amount[4]-f;
					p->cost[4]+=f*20;
				}while(f>20);
				break;
			case 6:
				do
				{
					printf("现有库存%d\n",temp.amount[5]);
					printf("购买芬必得数量:");
					scanf("%d",&g);
					if(g>temp.amount[5]) 
					{
						printf("库存不足，请重新输入\r\n") ;
						scanf("%d",&g);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********购买成功********\r\n");
					}
					temp.amount[5]=temp.amount[5]-g;
					p->cost[5]+=g*10;
				}while(g>30);
				break;
			case 7:
				do
				{
					printf("现有库存%d\n",temp.amount[6]);
					printf("购买胰岛素数量:");
					scanf("%d",&h);
					if(h>temp.amount[6]) 
					{
						printf("库存不足，请重新输入\r\n") ;
						scanf("%d",&h);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********购买成功********\r\n");
					}
					temp.amount[6]=temp.amount[6]-h;
					p->cost[6]+=h*20;
				}while(h>40);
				break;
			case 8:
				do
				{
					printf("现有库存%d\n",temp.amount[7]);
					printf("购买酚酞片数量:");
					scanf("%d",&i);
					if(i>temp.amount[7]) 
					{
						printf("库存不足，请重新输入\r\n") ;
						scanf("%d",&i);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********购买成功********\r\n");
					}
					temp.amount[7]=temp.amount[7]-i;
					p->cost[7]+=i*20;
				}while(i>45);
				break;
			case 9:
				do
				{
					printf("现有库存%d\n",temp.amount[8]);
					printf("购买护肝片数量:");
					scanf("%d",&j);
					if(j>temp.amount[8]) 
					{
						printf("库存不足，请重新输入\r\n") ;
						scanf("%d",&j);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********购买成功********\r\n");
					}
					temp.amount[8]=temp.amount[8]-j;
					p->cost[8]+=j*10;
				}while(j>10);
				break;
			case 10:
				do
				{
					printf("现有库存%d\n",temp.amount[9]);
					printf("购买多巴胺数量:");
					scanf("%d",&k);
					if(k>temp.amount[9]) 
					{
						printf("库存不足，请重新输入\r\n") ;
						scanf("%d",&k);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********购买成功********\r\n");
					}
					temp.amount[9]=temp.amount[9]-k;
					p->cost[9]+=k*20;
				}while(k>60);
				break;
			case 0:
				return temp;
		}
		}
	}
}

void liststock(node2 temp)//查询药品信息 
{
    printf("药品\t数量\t价格\t\n");
	printf("巴米尔\t%d\t%d\t\n",temp.amount[0],temp.price[0]);
	printf("感冒灵\t%d\t%d\t\n",temp.amount[1],temp.price[1]);
    printf("病毒灵\t%d\t%d\t\n",temp.amount[2],temp.price[2]);
	printf("脂肪乳\t%d\t%d\t\n",temp.amount[3],temp.price[3]);
	printf("谷维素\t%d\t%d\t\n",temp.amount[4],temp.price[4]);
    printf("芬必得\t%d\t%d\t\n",temp.amount[5],temp.price[5]);
	printf("胰岛素\t%d\t%d\t\n",temp.amount[6],temp.price[6]);
	printf("酚酞片\t%d\t%d\t\n",temp.amount[7],temp.price[7]);
    printf("护肝片\t%d\t%d\t\n",temp.amount[8],temp.price[8]);
	printf("多巴胺\t%d\t%d\t\n",temp.amount[9],temp.price[9]);
}


