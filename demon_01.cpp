#define _CRT_SECURE_NO_WARNINGS 1
//��֧���if&switch
#include <stdio.h>//standard input&output.header file

int main()
{
//1.��ӡ
	printf("hello world\n");//print function

//2.if���01
	int age01= 11; 
	if (age01 < 18)
	{
		printf("δ����\n");
		printf("��ֹ���ֻ�\n");
	}
	else 
	{
		if (age01 >= 18 && age01 < 50)//18<=age01<40
		{
			printf("����\n");
		}
		else
		{
			printf("����\n");
		}
	}

//3.if���02
	int age02 = 32;
	if (age02 < 18)
	{
		printf("δ����\n");
		printf("��ֹ���ֻ�\n");
	}
	else if (age02 >= 18 && age02 < 50)//18<=age02<40
	{
		printf("����\n");
	}
	else if(age02>=50 && age02<=100)
	{
		printf("����\n");
	}

//4.if���03_����else ��������ϰ��
	int a = 1;
    int b = 2;
	if (a == 3)
	{
		if (b == 2)
		{
			printf("AA");
		}
		else
		{
			printf("BB");
		}
	}

//5.��ϰ 1.�ж�һ�����Ƿ�Ϊ����	2.���1-100������
	int i = 1;
	while(i<=100)
	{
		if (i % 2 ==1)
		{
			printf("%d", i );
		}
		i++;
		
		

	}
	int c = 1;
	while (c <= 100)
	{
		printf("%d", c);
		c+=2;		
	}
//6.switch���_ʵ�ֶ��֧���
	//switchΪ���ճ������ʽ
	int day = 0;
	scanf("%d", &day);//scan format
	switch (day)
	{
	case 1:
		printf("����һ");
		break;
	case 2:
		printf("���ڶ�");
		break;
	case 3:
		printf("����s��");
		break;
	case 4:
		printf("������");
		break;
	case 5:
		printf("������");
		break;
	case 6:
		printf("������");
		break;
	case 7:
		printf("������");
		break;
	}
//7.switch���02
	int day2 = 0;
	scanf("%d", &day2);//&ȡ��ַ
	switch (day2)
	{
	case 1:
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������");
		break;
	case 6:
	case 7:
		printf("��Ϣ��");
		break;
	default:
		printf("������1��7�ڵ�����");
	}

	return 0;
}
//��