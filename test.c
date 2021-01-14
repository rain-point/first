#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n, h, m;
//	while (scanf("%d %d %d", &n, &h, &m) != EOF)
//	{
//		printf("%d\n", n - (m / h) - (m%h));
//	}
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("I lost my cellphone!");
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	printf("Name    Age    Gender\n");
//	printf("---------------------\n");
//	printf("Jack    18     man\n");
//	    return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b, c, d, e;
//	scanf("%d %d %d %d %d", &a, &b, &c, &d, &e);
//	printf("%.1f", (a + b + c + d + e) / 5.0);
//	return 0;
//}
//#include<stdio.h>
//int main()
//{
//	int a, b;
//	scanf("%x %o", &a, &b);
//	printf("%d\n", a + b);
//	return 0;
//}
#include<stdio.h>
//int Add(int x, int y)
//{
//	return x + y;
//}
//int main()
//{
//	int arr[10] = { 0 };
//	arr[4] = 5;//[]就是下标引用操作符
//	int ret=Add(2, 3);//()函数调用操作符
//	return 0;
//
//}
//void test()
//{
//	static int a = 1;//static修饰局部变量只初始化一次
//	a++;
//	printf("%d", a);
//}
//
//int main()
//{
//	int i = 0;
//	while (i < 10)
//	{
//		test();
//		i++;
//	}
//	return 0;
//}//static静态修饰局部变量，改变了局部变量的生命周期，作用域不发生变化
//static修饰全局变量,只能在自己所在的源文件内部使用，出了源文件就无法链接到了
//全局变量是具有外部链接属性的
//其他源文件通过声明可以使用
//static修饰全局变量候把外部链接属性，改成了内部链接属性

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//register是建议把自己创建的变量存储到寄存器中
//#define ADD(x,y) (x+y)
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int ret = ADD(a, b);
//	printf("%d\n", ret);
//	return 0;
//}

struct stu 
{
	char name[20];
	short age;
	char sex[8];
};

int main()
{
	struct stu s1 = { "张三", 20, "男" };
	struct stu s2 = { "李四",18,"女" };
	printf("%s %d %s", s1.name, s1.age, s1.sex);//结构成员访问操作符  结构体变量.结构体成员
	struct stu* ps = &s1;
	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);//1
	printf("%s %d %s\n", ps->name, ps->age, ps->sex);//2 //->结构成员访问操作符    结构体指针->结构体成员
	return 0;
}