#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
#include <stdio.h>
int main() {
	int num, x, y = 0;
	printf("������һλ����");
	scanf("%d", &num);
	x = num;
	while (x > 0) {
		y = y * 10 + x % 10;
		x = x / 10;
	}
	if (num == y) {
		printf("%d��һ��������", num);
	}
	else {
		printf("%d����һ��������", num);
	}
}
#include <stdio.h>

int move(char from, int n, char to) {
	static int k = 1;
	printf("%2d:%3d # %c---%c\n", k, n, from, to);
	if (k++ % 3 == 0)
		printf("\n");
	return 0;
}

int hanoi(int n, char x, char y, char z) {
	if (n == 1)
		move(x, 1, z);
	else {
		hanoi(n - 1, x, z, y);
		move(x, n, z);
		hanoi(n - 1, y, x, z);
	}
	return 0;
}

int main() {
	int n;
	printf("���������ӵ�������");
	scanf("%d", &n);
	printf("\n");
	hanoi(n, 'A', 'B', 'C');
	return 0;
}
