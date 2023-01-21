#define _CRT_SECURE_NO_WARNINGS 1
# include<stdio.h>
//void test(const char* rst)
//{
//	printf("%s\n",rst);
//}
//int main()
//{
//	void (*p1)(const char*) = test;  //函数指针
//	void (*p2[5])(const char*) = {test};  //函数指针数组    
//	void (*(*p3)[5])(const char*)=&p2;    //指向函数指针数组的数组指针
//	(**p3)("hello bit");    //使用指向函数指针数组的数组指针  //p3==数组全部地址//*p3==数组首元素地址//**p3==函数地址
//	(*p2)("hello bit");		//使用函数指针数组	//p2等于数组首元素地址//*p2等于函数地址
//	p1("hello bit");		//使用函数指针 //p1等于函数地址
//	return 0;
//}
//void menu()
//{
//	printf("*************************\n");
//	printf("****1:加法     2:减法****\n");
//	printf("****3:乘法     4:除法****\n");
//	printf("***********0:退出********\n");
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
//		printf("请选择\n");
//		scanf("%d", &input);
//		switch (input)
//		{
//		    case 1:
//				printf("请输入两个值:>");
//				scanf("%d %d", &x, &y);
//				printf("%d\n",jia(x, y));
//				break;
//			case 2:
//				printf("请输入两个值:>");
//				scanf("%d %d", &x, &y);
//				printf("%d\n", jian(x, y));
//				break;
//			case 3:
//				printf("请输入两个值:>");
//				scanf("%d %d", &x, &y);
//				printf("%d\n", cheng(x, y));
//				break;
//			case 4:
//				printf("请输入两个值:>");
//				scanf("%d %d", &x, &y);
//				printf("%d\n",chu(x, y));
//				break;
//			case 0:
//				printf("退出\n");
//				break;
//		    default:
//				printf("选择错误\n");
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
//		printf("请选择\n");
//		scanf("%d", &input);
//		if (input >= 1 && input <= 4)
//		{
//			printf("请输入两个操作数:>\n");
//			scanf("%d %d", &x, &y);
//			printf("%d\n", par[input](x, y));
//
//		}
//		else if (input == 0)
//		{
//			printf("退出\n");
//			break;
//		}
//		else
//		{
//			printf("选择错误\n");
//		}
//		
//	} while (input);
//	return 0;
//}
//int ptest(int(*p)(int, int))
//{
//	int x = 0;
//	int y = 0;
//	printf("请输入两个操作数:>");
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
//		printf("请选择\n");
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
//				printf("退出\n");
//				break;
//		    default:
//				printf("选择错误\n");
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

