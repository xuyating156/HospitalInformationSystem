#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

/*������������*/
void RandomCode(char Rcode[])
{
	int i;
	srand((unsigned int)time(NULL));
	for(i = 0;i < 3;++i)
	Rcode[i] = rand()%10 + '0';
	Rcode[i] = '\0';
}

/*��½�������ж���Ϣ�Ƿ�ƥ�䣬��ƥ�䷵��1�����򷵻�0*/
int LandedApp(void)
{   char password1[10]={'a','d','m','i','n'} ;
	char password2[10]={'a','d','m','i','n','1','2','3'} ;
	char name[10] = {0};
	char pword[10] = {0};
	char Rcode[4] = {0};
	char rcode[4] = {0};
	printf("\t\t      @@  �û��� : ");
	gets(name);
	printf("\t\t      @@  ���� : ");
	gets(pword);
	RandomCode(Rcode);
	printf("\t\t      @@  ����� :%s \r\n",Rcode);
	printf("\t\t      @@  ����������� : ");
	gets(rcode);
	if(strcmp(name, password1) != 0 || strcmp(pword, password2) != 0 || strcmp(rcode, Rcode) != 0)
	return 0;
	else
	return 1;
}

void mainmeun()//���˵� 
{
	printf("\n");
	printf("\t\t\t      ��ӭ����ҽԺ����ϵͳ\n");
	printf("\t\t      ************************************\n");
	printf("\t\t\t\t1.ע���²�����Ϣ\n");
	printf("\t\t\t\t2.��ѯ������Ϣ\n");
	printf("\t\t\t\t3.д����\n");
	printf("\t\t\t\t4.��������\n");
	printf("\t\t\t\t5.�г����в�����Ϣ\n");
	printf("\t\t\t\t6.�޸Ĳ��˲�����Ϣ\n");
	printf("\t\t\t\t7.��ѯҩƷ���\n");
	printf("\t\t\t\t8.�뿪\n");
	printf("\t\t      ************************************\n");
}

char chose()//ѡ��˵� 
{
	node1 *head=NULL,*p;
	node2 temp;
    temp = init(temp);//��ʼ�� 
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
			printf("ллʹ�ã�ף����Զ�������ټ���\n");
	        return(0);
			break;
		default:
			printf("����������������\n");
			break;
		}
	}
}


