#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "common.h"

int main(int argc,char** argv)
{
	int  i, j, k, l, m;	
	char c = '@';				
		printf("\n");	//��ͷ�ճ�5�� 
	for(i=1; i<=3; i++) 
	{ 
		for(j=1; j<=32-2*i; j++)		
			printf(" ");	//��ߵĿո�ÿ��һ����ߵĿո����һ����2�� //8*n-2*i 

		for(k=1; k<=4*i+1; k++)		
			printf("%c", c);//�����벿���ַ�С���� 

		for(l=1; l<=13-4*i; l++)		
			printf(" ");	//�м�Ŀո�ÿ��һ�еĿո����һ����4�� 

		for(m=1; m<=4*i+1; m++)		
			printf("%c", c);//����Ұ벿���ַ�С����

		printf("\n");		//ÿһ�������ϻ��� 
	}
	
	for(i=1; i<=3; i++) 
	{	//��3���м�û�пո� 

		for(j=1; j<=24+1; j++)			
			printf(" ");	//��ߵĿո� //8*(n-1)+1

		for(k=1; k<=29; k++)			
			printf("%c", c);//����ַ�С����

		printf("\n");		//ÿһ�������ϻ���
	}

	for(i=7; i>=1; i--) 
	{	//��7�� 

		for(j=1; j<=40-2*i; j++)		
			printf(" ");	//��ߵĿո�ÿ��һ����ߵĿո����һ����2��//8*(n+1)-2*i

		for(k=1; k<=4*i-1; k++)		
			printf("%c", c);//ÿ��һ�е��ַ�С���ı���һ����4�������ѭ����i--�� 

		printf("\n");		//ÿһ�������ϻ���
	}

	for(i=1; i<=39; i++)				
		printf(" ");	//���һ����ߵĿո� 

	printf("%c\n", c);		//���һ���ַ�С���� 
				
	printf("\n");	//���ճ�5�� 
	
	//	�û�����admin, ���룺admin123
	int count = 3; //ֻ������3��
	printf("\t\t      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\r\n");
	puts("\t\t      @@  �������û���������������");
	while(count!=0)
	{
		if(LandedApp() == 1)
		{
			printf("\t\t      @@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\r\n");
					puts("\n\t\t\t\t  �ɹ���½ ��");
					chose();
					break;

		}	
		else
			printf("\t\t      @@  ������û��������������룬���������룬������%d�λ��᣺\r\n",--count);	 
    }
	while(count==0)
	{ 
		puts("\n\t\t\t\t  ��¼ʧ�� ��");
		break;
	}	
}


