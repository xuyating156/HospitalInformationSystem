#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include "common.h"

void search(node1 *p1)//查询病人信息 
{
	int sum = 0;
	char a[10];
	printf("请输入病人ID\n");
	scanf("%s",a);
	while(p1->ID&&strcmp(p1->ID,a))
	{
		p1=p1->next;
	}
	if(p1)
	{
		printf("ID:%s\n",p1->ID);
		printf("姓名:%s\n",p1->name);
		printf("病例:%s\n",p1->bingli);
		printf("消费记录:\n");
		if(p1->cost[0])
			printf("巴米尔个数:%d,金额:%d\t\n",p1->cost[0]/5,p1->cost[0]);
        if(p1->cost[1])
			printf("感冒灵个数:%d,金额:%d\t\n",p1->cost[1]/9,p1->cost[1]);
		if(p1->cost[2])
			printf("病毒灵个数:%d,金额:%d\t\n",p1->cost[2]/16,p1->cost[2]);
		if(p1->cost[3])
	    	printf("脂肪乳个数:%d,金额:%d\t\n",p1->cost[3]/20,p1->cost[3]);
		if(p1->cost[4])	
			printf("谷维素个数:%d,金额:%d\t\n",p1->cost[4]/20,p1->cost[4]);
		if(p1->cost[5])	
			printf("芬必得个数:%d,金额:%d\t\n",p1->cost[5]/10,p1->cost[5]);
		if(p1->cost[6])	
			printf("胰岛素个数:%d,金额:%d\t\n",p1->cost[6]/20,p1->cost[6]);
		if(p1->cost[7])	
			printf("酚酞片个数:%d,金额:%d\t\n",p1->cost[7]/20,p1->cost[7]);
		if(p1->cost[8])	
			printf("护肝片个数:%d,金额:%d\t\n",p1->cost[8]/10,p1->cost[8]);
		if(p1->cost[9])	
			printf("多巴胺个数:%d,金额:%d\t\n",p1->cost[9]/20,p1->cost[9]);
			
		sum=p1->cost[0]+p1->cost[1]+p1->cost[2]+p1->cost[3]+p1->cost[4]+p1->cost[5]+p1->cost[6]+p1->cost[7]+p1->cost[8]+p1->cost[9];
		
		printf("总费用\t%d\n",sum);
	
	}
		else
			printf("该病人没有注册\n");

}

node1 * create(node1 *p1)//注册病人信息 
{
	node1 *p;
	p=(node1 *)malloc(sizeof(node1));
	printf("请输入病人ID\n");
    scanf("%s",p->ID);
	
	while(p1->ID&&strcmp(p1->ID,p->ID))
	{
		p1=p1->next;
	}
    if(p1==NULL)
	{
	    printf("请输入病人姓名\n");
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
    	printf("已成功注册信息！\n");
		return p;
	}
	else 
	{
		printf("输入病人ID已存在,注册失败！\n");
		return p;
	}
}

node1 * insert(node1 * head,node1 *p) //添加病人信息 
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

void bingli(node1 *p)//写病人病历 
{
	char a[10];
	char bingli[300];
	char enter[5]="\n";
    printf("请输入病人ID\n");
    scanf("%s",a);

	while(p->ID&&strcmp(p->ID,a))
	{
		p=p->next;
	}
	if(p==NULL)
	{
		printf("无该病人信息\n");
	}
	else
	{
		printf("请写病例:\n");
		scanf("%s",bingli);
		strcpy(p->bingli,bingli);
		strcat(p->bingli,enter);
	}
}

void list(node1 *p)//列出所有病人信息
{
	int sum = 0;
	if(p==NULL)
		printf("尚无病人信息\n");
	else
	{	
		do{
			printf("病人ID:%s\n",p->ID);
			printf("病人姓名:%s\n",p->name);
			printf("病人病例:%s\n",p->bingli);
			
			printf("购买巴米尔费用:%d\n",p->cost[0]);
			
			printf("购买感冒灵费用:%d\n",p->cost[1]);
		
			printf("购买病毒灵费用:%d\n",p->cost[2]);
			
			printf("购买脂肪乳费用:%d\n",p->cost[3]);
			
			printf("购买谷维素费用:%d\n",p->cost[4]);
			
			printf("购买芬必得费用:%d\n",p->cost[5]);
			
			printf("购买胰岛素费用:%d\n",p->cost[6]);
			
			printf("购买酚酞片费用:%d\n",p->cost[7]);
			
			printf("购买护肝片费用:%d\n",p->cost[8]);
			
			printf("购买多巴胺费用:%d\n",p->cost[9]);
			
			sum=p->cost[0]+p->cost[1]+p->cost[2]+p->cost[3]+p->cost[4]+p->cost[5]+p->cost[6]+p->cost[7]+p->cost[8]+p->cost[9];
			printf("总费用\t%d\n",sum);
			
			printf("\n");
			p=p->next; 
		}while(p!=NULL);
	}
}

char modify(node1 *p)//修改新病例
{
	char t[10],d[200];
	char bingli[300];
	char enter[5]="\n";
    printf("请输入病人ID\n");
    scanf("%s",t);
	while(p->ID&&strcmp(p->ID,t))
	{
		p=p->next;
	}
	if(p==NULL)
	{
		printf("无该病人信息\n");
	}
	else
	{
		printf("请写新的病例:\n");
		scanf("%s",d);
		strcat(p->bingli,d);
		strcat(p->bingli,enter);
	}
}


