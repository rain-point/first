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
//	arr[4] = 5;//[]�����±����ò�����
//	int ret=Add(2, 3);//()�������ò�����
//	return 0;
//
//}
//void test()
//{
//	static int a = 1;//static���ξֲ�����ֻ��ʼ��һ��
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
//}//static��̬���ξֲ��������ı��˾ֲ��������������ڣ������򲻷����仯
//static����ȫ�ֱ���,ֻ�����Լ����ڵ�Դ�ļ��ڲ�ʹ�ã�����Դ�ļ����޷����ӵ���
//ȫ�ֱ����Ǿ����ⲿ�������Ե�
//����Դ�ļ�ͨ����������ʹ��
//static����ȫ�ֱ�������ⲿ�������ԣ��ĳ����ڲ���������

//extern int g_val;
//int main()
//{
//	printf("%d\n", g_val);
//	return 0;
//}
//register�ǽ�����Լ������ı����洢���Ĵ�����
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
	struct stu s1 = { "����", 20, "��" };
	struct stu s2 = { "����",18,"Ů" };
	printf("%s %d %s", s1.name, s1.age, s1.sex);//�ṹ��Ա���ʲ�����  �ṹ�����.�ṹ���Ա
	struct stu* ps = &s1;
	printf("%s %d %s\n", (*ps).name, (*ps).age, (*ps).sex);//1
	printf("%s %d %s\n", ps->name, ps->age, ps->sex);//2 //->�ṹ��Ա���ʲ�����    �ṹ��ָ��->�ṹ���Ա
	return 0;
}