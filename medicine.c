#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

node2 init(node2 temp)//ҩƷ�۸񡢿�� 
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

node2 buy(node1 *p,node2 temp)//�������ѣ���ҩ�� 
{
	char i[10];
	printf("�����벡��ID\n");
	scanf("%s",i);
	while(p->ID&&strcmp(p->ID,i))
	{
		p=p->next;
	}
	if(p==NULL)
	printf("���޲�����Ϣ\n");
	else
	{
	while(1)
	{
		int a,b,c,d,e,f,g,h,i,j,k;
		printf("1.������׶�\n");
		printf("2.�����ð��\n");
		printf("3.���򲡶���\n");
		printf("4.����֬����\n");
		printf("5.�����ά��\n");
		printf("6.����ұص�\n");
		printf("7.�����ȵ���\n");
		printf("8.�����̪Ƭ\n");
		printf("9.���򻤸�Ƭ\n");
		printf("10.�����Ͱ�\n");
		printf("0.�˳�\n");
		scanf("%d",&a);
		switch(a)
		{
			case 1:
				do
				{
					printf("���п��%d\n",temp.amount[0]);
					printf("������׶�����:");
					scanf("%d",&b);
					if(b>temp.amount[0]) 
					{
						printf("��治�㣬����������\r\n") ;
						scanf("%d",&b);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********����ɹ�********\r\n");
					}
					temp.amount[0]=temp.amount[0]-b;
					p->cost[0]+=b*5;
				}while(b>20);
				break;
			case 2:
				do
				{
					printf("���п��%d\n",temp.amount[1]);
					printf("�����ð������:");
					scanf("%d",&c);
					if(c>temp.amount[1]) 
					{
						printf("��治�㣬����������\r\n") ;
						scanf("%d",&c);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t*************����ɹ�*************\r\n");
					}
					temp.amount[1]=temp.amount[1]-c;
					p->cost[1]+=c*9;
				}while(c>35);
				break;
			case 3:
				do
				{
					printf("���п��%d\n",temp.amount[2]);
					printf("���򲡶�������:");
					scanf("%d",&d);
					if(d>temp.amount[2]) 
					{
						printf("��治�㣬����������\r\n") ;
						scanf("%d",&d); 
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********����ɹ�********\r\n");
					}
					temp.amount[2]=temp.amount[2]-d;
					p->cost[2]+=d*16;
				}while(d>10);
				break;
			case 4:
				do
				{
					printf("���п��%d\n",temp.amount[3]);
					printf("����֬��������:");
					scanf("%d",&e);
					if(e>temp.amount[3]) 
					{
						printf("��治�㣬����������\r\n") ;
						scanf("%d",&e);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********����ɹ�********\r\n");
					}
					temp.amount[3]=temp.amount[3]-e;
					p->cost[3]+=e*20;
				}while(e>50);
				break;
			case 5:
				do
				{
					printf("���п��%d\n",temp.amount[4]);
					printf("�����ά������:");
					scanf("%d",&f);
					if(f>temp.amount[4]) 
					{
						printf("��治�㣬����������\r\n") ;
						scanf("%d",&f);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********����ɹ�********\r\n");
					}
					temp.amount[4]=temp.amount[4]-f;
					p->cost[4]+=f*20;
				}while(f>20);
				break;
			case 6:
				do
				{
					printf("���п��%d\n",temp.amount[5]);
					printf("����ұص�����:");
					scanf("%d",&g);
					if(g>temp.amount[5]) 
					{
						printf("��治�㣬����������\r\n") ;
						scanf("%d",&g);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********����ɹ�********\r\n");
					}
					temp.amount[5]=temp.amount[5]-g;
					p->cost[5]+=g*10;
				}while(g>30);
				break;
			case 7:
				do
				{
					printf("���п��%d\n",temp.amount[6]);
					printf("�����ȵ�������:");
					scanf("%d",&h);
					if(h>temp.amount[6]) 
					{
						printf("��治�㣬����������\r\n") ;
						scanf("%d",&h);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********����ɹ�********\r\n");
					}
					temp.amount[6]=temp.amount[6]-h;
					p->cost[6]+=h*20;
				}while(h>40);
				break;
			case 8:
				do
				{
					printf("���п��%d\n",temp.amount[7]);
					printf("�����̪Ƭ����:");
					scanf("%d",&i);
					if(i>temp.amount[7]) 
					{
						printf("��治�㣬����������\r\n") ;
						scanf("%d",&i);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********����ɹ�********\r\n");
					}
					temp.amount[7]=temp.amount[7]-i;
					p->cost[7]+=i*20;
				}while(i>45);
				break;
			case 9:
				do
				{
					printf("���п��%d\n",temp.amount[8]);
					printf("���򻤸�Ƭ����:");
					scanf("%d",&j);
					if(j>temp.amount[8]) 
					{
						printf("��治�㣬����������\r\n") ;
						scanf("%d",&j);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********����ɹ�********\r\n");
					}
					temp.amount[8]=temp.amount[8]-j;
					p->cost[8]+=j*10;
				}while(j>10);
				break;
			case 10:
				do
				{
					printf("���п��%d\n",temp.amount[9]);
					printf("�����Ͱ�����:");
					scanf("%d",&k);
					if(k>temp.amount[9]) 
					{
						printf("��治�㣬����������\r\n") ;
						scanf("%d",&k);
					}
					else
					{   system("cls");
						printf("\n");
						printf("\t\t\t\t\t\t********����ɹ�********\r\n");
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

void liststock(node2 temp)//��ѯҩƷ��Ϣ 
{
    printf("ҩƷ\t����\t�۸�\t\n");
	printf("���׶�\t%d\t%d\t\n",temp.amount[0],temp.price[0]);
	printf("��ð��\t%d\t%d\t\n",temp.amount[1],temp.price[1]);
    printf("������\t%d\t%d\t\n",temp.amount[2],temp.price[2]);
	printf("֬����\t%d\t%d\t\n",temp.amount[3],temp.price[3]);
	printf("��ά��\t%d\t%d\t\n",temp.amount[4],temp.price[4]);
    printf("�ұص�\t%d\t%d\t\n",temp.amount[5],temp.price[5]);
	printf("�ȵ���\t%d\t%d\t\n",temp.amount[6],temp.price[6]);
	printf("��̪Ƭ\t%d\t%d\t\n",temp.amount[7],temp.price[7]);
    printf("����Ƭ\t%d\t%d\t\n",temp.amount[8],temp.price[8]);
	printf("��Ͱ�\t%d\t%d\t\n",temp.amount[9],temp.price[9]);
}


