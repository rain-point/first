#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<math.h>
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		int flag = 1;//����i������
//		int j = 0;
//		j��ȡֵ��Χ��2-��i-
//		for (j = 2; j <= sqrt(i); j++)//������������Ļ���������˿϶���һ����С�ڵ��ڿ�ƽ�������
//		{
//			if (i%j == 0)
//			{
//				flag = 0;
//				break;
//			}
//			if (flag == 1)
//			{
//				count++;
//				printf("%d", i);
//			}
//		}
//		printf("\ncount=%d\n", count);
//	}
//	return 0;
//}

//int main()
//{
//	char arr1[] = "bit";//����Դ
//	char arr2[20] = { 0 };//Ŀ�ĵ�
//	strcpy(arr2, arr1);
//	printf("%s\n", arr2);
//	return 0;
//}
//int main()
//{
//	char arr[] = "hello,bit";
//	memset(arr, 'x', 5);
//	printf("%s\n", arr);
//	return 0;
//}
//int main()
//{
//	int a = 10;
//	int b = 20;
//	int *pa = &a;
//	int *pb = &b;
//	test1(pa, pb);//��ֵ
//	test2(&pa, &pb);//��ַ
//	return 0;
//}
//int is_prime(int i)
//{
//	int flag = 0;
//	int j = 0;
//	//�ж�i�Ƿ�Ϊ����
//	for (j = 2; j <= sqrt(i); i++)
//	{
//		if (i%j == 0)
//		{
//			flag = 0;
//			break;
//		}
//		return 1;
//	}
//	return flag;
//}
//
//int main()
//{
//	int i = 0;
//	for (i = 100; i <= 200; i++)
//	{
//		if (is_prime(i) == 1)
//		{
//			printf("%d", i);
//		}
//	}
//}
int binary_search(int arr[],int *k,int *sz)
{
	int left = 0;
	int right = sz - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (k > arr[mid])
		{
			left = mid + 1;
		}
		else if (k < arr[mid])
		{
			right = mid - 1;
		}
		else
			return mid;
	}
}
int main()
{
	int arr[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	int k = 7;
	int sz = sizeof(arr)/ sizeof(arr[0]);
	int ret = binary_search(arr, k, sz);
	if (ret == -1)
	{
		printf("�Ҳ���\n");
	}
	else
	{
		printf("�ҵ��ˣ��±��ǣ�%d\n", ret);
	}
	return 0;
}