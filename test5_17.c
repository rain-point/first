#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 1;
	char b = 'A';
	int arr[20] = { 0 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof a);
	printf("%d\n", sizeof(int));

	printf("%d\n", sizeof(b));
	printf("%d\n", sizeof(char));

	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(int[20]));
	return 0;
}
int main()
{
	int i = 11;
	//00000000 00000000 00000000 00001011 �õ�������λ���1�����಻��
	//00000000 00000000 00000000 00000100  ��λ��  ���ܵõ�
	//1 << 2 1����2λ�õ� 00000000 00000000 00000000 00000100

	//int j = i | 4;
	int j = i | (1 << 2);
	printf("%d\n", j);
	//��j���ԭ����i  ֻ��Ҫ��λ�����
	//00000000 00000000 00000000 00001111
	//11111111 11111111 11111111 11111011
	//00000000 00000000 00000000 00001011
	//��  11111111 11111111 11111111 11111011 �����ɰ�λȡ���õ�
	//    00000000 00000000 00000000 00000100  ������ֿ���ͨ��1����2λ�õ�
	j = j & (~(1 << 2));
	printf("%d\n", j);
	//int a = 0;
	//printf("%d\n", ~a);
	return 0;
}
