#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
//void test(const char* rst)
//{
//	printf("%s\n",rst);
//}
//int main()
//{
//	void (*p1)(const char*) = test;  //����ָ��
//	void (*p2[5])(const char*) = {test};  //����ָ������    
//	void (*(*p3)[5])(const char*)=&p2;    //ָ����ָ�����������ָ��
//	(**p3)("hello bit");    //ʹ��ָ����ָ�����������ָ��  //p3==����ȫ����ַ//*p3==������Ԫ�ص�ַ//**p3==������ַ
//	(*p2)("hello bit");		//ʹ�ú���ָ������	//p2����������Ԫ�ص�ַ//*p2���ں�����ַ
//	p1("hello bit");		//ʹ�ú���ָ�� //p1���ں�����ַ
//	return 0;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("****1:�ӷ�     2:����****\n");
//	printf("****3:�˷�     4:����****\n");
//	printf("***********0:�˳�********\n");
//
//}
//int jia(int x, int y)
//{
//	return x + y;
//}
//int jian(int x, int y)
//{
//	return x - y;
//}
//int cheng(int x, int y)
//{
//	return x * y;
//}
//int chu(int x, int y)
//{
//	return x/y;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	do 
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		    case 1:
//				printf("����������ֵ:>");
//				scanf("%d %d", &x, &y);
//				printf("%d\n",jia(x, y));
//				break;
//			case 2:
//				printf("����������ֵ:>");
//				scanf("%d %d", &x, &y);
//				printf("%d\n", jian(x, y));
//				break;
//			case 3:
//				printf("����������ֵ:>");
//				scanf("%d %d", &x, &y);
//				printf("%d\n", cheng(x, y));
//				break;
//			case 4:
//				printf("����������ֵ:>");
//				scanf("%d %d", &x, &y);
//				printf("%d\n",chu(x, y));
//				break;
//			case 0:
//				printf("�˳�\n");
//				break;
//		    default:
//				printf("ѡ�����\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	int (*par[]) (int, int) = { 0,jia,jian,cheng,chu };
//	do
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("����������������:>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", par[input](x, y));
//
//		}
//		else if (input == 0)
//		{
//			printf("�˳�\n");
//			break;
//		}
//		else
//		{
//			printf("ѡ�����\n");
//		}
//		
//	} while (input);
//	return 0;
//}
//int ptest(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("����������������:>");
//	scanf("%d %d", &x, &y);
//	return p(x, y);
//}
//int main()
//{
//	int input = 0;
//	int x = 0;
//	int y = 0;
//	
//	do 
//	{
//		menu();
//		printf("��ѡ��\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		    case 1:
//				printf("%d\n",ptest(jia));
//				break;
//			case 2:
//				printf("%d\n", ptest(jian));
//				break;
//			case 3:
//				printf("%d\n", ptest(cheng));
//				break;
//			case 4:
//				printf("%d\n", ptest(chu));
//				break;
//			case 0:
//				printf("�˳�\n");
//				break;
//		    default:
//				printf("ѡ�����\n");
//				break;
//		}
//	} while (input);
//	return 0;
//}
//int main()
//{
//	int a = 45;
//	printf("%d",*(&a));
//	int* p = &a;
//	return 0;
//}

