#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int isprime = 1;  //������
	/*�������ַ�������A�¼���1��2�������ʱ��
	1������󣬽��ʼ�ղ��䣻
	2�������У�����϶��������仯*/

	int i, x;

	scanf("%d", x);
	for (i = 2; i<x; i++){
		if (x%i == 0){
			isprime = 0;
			break;
		}
	}
	if (isprime == 1){
		printf("yes");
	}
	else{
		printf("no");
	}
	return 0;
}
int main(void)
{
	int a, n;
	scanf("%d %d", &a, &n);

	//����ѭ���ֱ����ÿ�ε���ֵ
	int i;
	int sum = 0;
	int t = 0;
	int m = 1;
	for (i = 0; i<n; i++){
		t = t * 10 + a;
		sum += t;

	}
	printf("%d", sum);

	return 0;
}
