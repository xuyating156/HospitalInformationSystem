#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "common.h"

void search(node1 *p1)//��ѯ������Ϣ 
{
	int sum = 0;
	char a[10];
	printf("�����벡��ID\n");
	scanf("%s",a);
	while(p1->ID&&strcmp(p1->ID,a))
	{
		p1=p1->next;
	}
	if(p1)
	{
		printf("ID:%s\n",p1->ID);
		printf("����:%s\n",p1->name);
		printf("����:%s\n",p1->bingli);
		printf("���Ѽ�¼:\n");
		if(p1->cost[0])
			printf("���׶�����:%d,���:%d\t\n",p1->cost[0]/5,p1->cost[0]);
        if(p1->cost[1])
			printf("��ð�����:%d,���:%d\t\n",p1->cost[1]/9,p1->cost[1]);
		if(p1->cost[2])
			printf("���������:%d,���:%d\t\n",p1->cost[2]/16,p1->cost[2]);
		if(p1->cost[3])
	    	printf("֬�������:%d,���:%d\t\n",p1->cost[3]/20,p1->cost[3]);
		if(p1->cost[4])	
			printf("��ά�ظ���:%d,���:%d\t\n",p1->cost[4]/20,p1->cost[4]);
		if(p1->cost[5])	
			printf("�ұصø���:%d,���:%d\t\n",p1->cost[5]/10,p1->cost[5]);
		if(p1->cost[6])	
			printf("�ȵ��ظ���:%d,���:%d\t\n",p1->cost[6]/20,p1->cost[6]);
		if(p1->cost[7])	
			printf("��̪Ƭ����:%d,���:%d\t\n",p1->cost[7]/20,p1->cost[7]);
		if(p1->cost[8])	
			printf("����Ƭ����:%d,���:%d\t\n",p1->cost[8]/10,p1->cost[8]);
		if(p1->cost[9])	
			printf("��Ͱ�����:%d,���:%d\t\n",p1->cost[9]/20,p1->cost[9]);
			
		sum=p1->cost[0]+p1->cost[1]+p1->cost[2]+p1->cost[3]+p1->cost[4]+p1->cost[5]+p1->cost[6]+p1->cost[7]+p1->cost[8]+p1->cost[9];
		
		printf("�ܷ���\t%d\n",sum);
	
	}
		else
			printf("�ò���û��ע��\n");

}

node1 * create(node1 *p1)//ע�Ს����Ϣ 
{
	node1 *p;
	p=(node1 *)malloc(sizeof(node1));
	printf("�����벡��ID\n");
    scanf("%s",p->ID);
	
	while(p1->ID&&strcmp(p1->ID,p->ID))
	{
		p1=p1->next;
	}
    if(p1==NULL)
	{
	    printf("�����벡������\n");
	    scanf("%s",p->name);
	    strcpy(p->bingli,"0");
	    
		p->cost[0]=0;
		p->cost[1]=0; 
		p->cost[2]=0;
		p->cost[3]=0;
		p->cost[4]=0; 
		p->cost[5]=0;
		p->cost[6]=0;
		p->cost[7]=0; 
		p->cost[8]=0;
		p->cost[9]=0;
		p->next=NULL;
    	printf("�ѳɹ�ע����Ϣ��\n");
		return p;
	}
	else 
	{
		printf("���벡��ID�Ѵ���,ע��ʧ�ܣ�\n");
		return p;
	}
}

node1 * insert(node1 * head,node1 *p) //��Ӳ�����Ϣ 
{
    node1 *p1; 
	if(head==NULL)
	{
		head=p;
		p->next=NULL; 
	}
	else
	{
		p1=head;
		while(p1->next)
		{
			p1=p1->next; 
		}
		p1->next=p;
		p->next=NULL; 
	}
	return(head);
}

void bingli(node1 *p)//д���˲��� 
{
	char a[10];
	char bingli[300];
	char enter[5]="\n";
    printf("�����벡��ID\n");
    scanf("%s",a);

	while(p->ID&&strcmp(p->ID,a))
	{
		p=p->next;
	}
	if(p==NULL)
	{
		printf("�޸ò�����Ϣ\n");
	}
	else
	{
		printf("��д����:\n");
		scanf("%s",bingli);
		strcpy(p->bingli,bingli);
		strcat(p->bingli,enter);
	}
}

void list(node1 *p)//�г����в�����Ϣ
{
	int sum = 0;
	if(p==NULL)
		printf("���޲�����Ϣ\n");
	else
	{	
		do{
			printf("����ID:%s\n",p->ID);
			printf("��������:%s\n",p->name);
			printf("���˲���:%s\n",p->bingli);
			
			printf("������׶�����:%d\n",p->cost[0]);
			
			printf("�����ð�����:%d\n",p->cost[1]);
		
			printf("���򲡶������:%d\n",p->cost[2]);
			
			printf("����֬�������:%d\n",p->cost[3]);
			
			printf("�����ά�ط���:%d\n",p->cost[4]);
			
			printf("����ұص÷���:%d\n",p->cost[5]);
			
			printf("�����ȵ��ط���:%d\n",p->cost[6]);
			
			printf("�����̪Ƭ����:%d\n",p->cost[7]);
			
			printf("���򻤸�Ƭ����:%d\n",p->cost[8]);
			
			printf("�����Ͱ�����:%d\n",p->cost[9]);
			
			sum=p->cost[0]+p->cost[1]+p->cost[2]+p->cost[3]+p->cost[4]+p->cost[5]+p->cost[6]+p->cost[7]+p->cost[8]+p->cost[9];
			printf("�ܷ���\t%d\n",sum);
			
			printf("\n");
			p=p->next; 
		}while(p!=NULL);
	}
}

char modify(node1 *p)//�޸��²���
{
	char t[10],d[200];
	char bingli[300];
	char enter[5]="\n";
    printf("�����벡��ID\n");
    scanf("%s",t);
	while(p->ID&&strcmp(p->ID,t))
	{
		p=p->next;
	}
	if(p==NULL)
	{
		printf("�޸ò�����Ϣ\n");
	}
	else
	{
		printf("��д�µĲ���:\n");
		scanf("%s",d);
		strcat(p->bingli,d);
		strcat(p->bingli,enter);
	}
}


