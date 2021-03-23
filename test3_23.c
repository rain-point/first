#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
	int main()
	{
		//fopen函数如果以写的形式打卡
		//如果文件不存在，会创建这个文件
		//如果文件存在，会清空文件的内容
		//fopen函数如果是以读的方式打开
		//文件不存在，打开失败
		FILE* pf = fopen("data.txt", "w");
		if (pf == NULL)
		{
			printf("%s\n", strerrno(errno));
			return 1;
		}
		//写文件
		int i = 0;
		for (i = 'a'; i <= 'z'; i++)
		{
			fputc(i, pf);
		}
		int ch = 0;
		while ((ch = fgetc(pf) != EOF))
		{
			printf("%c ", ch);
		}
		//关闭文件
		fclose(pf);
		pf = NULL;
		return 0;
	}
	int main()
	{
		FILE * pf = fopen("data.txt", "w");
		if (pf == NULL)
		{
			printf("%s\n", strerrno(errno));
			return 1;
		}
		//写一行数据
		fputs("hello bit\n", pf);
		return 0;
	}
	int main()
	{
		FILE* pf = fopen("data.txt", "r");
		if (pf == NULL)
		{
			printf("%s\n", strerror(errno));
			return -1;
		}
		// 打开文件成功，读文件
		int ch = 0;
		while ((ch = fgetc(pf)) != EOF)
		{
			printf("%c\n", ch);
		}
		// 关闭文件
		fclose(pf);
		pf = NULL;
	}
	int main()
	{
		char arr[1024] = { 0 };
		FILE* pf = fopen("data.txt", "r");
		if (pf == NULL)
		{
			printf("%s\n", strerror(errno);
			return 1;
		}
		fgets(arr, 100, pf);
		printf("%s\n", arr);
		fclost(pf);
		pf = NULL;
		return 0;
	}
	int main()
	{
		FILE* pf = fopen("data.txt", "w");
		if (pf == NULL)
		{
			printf("%s\n", strerror(errno));
			return -1;
		}
		fputs("hello\n", pf); // pf也可改成 stdout
		fputs("hello world\n", pf); // pf 也可改成 stdout
		// 关闭文件
		fclose(pf);
		pf = NULL;
	}
	struct S
	{
		char name[20];
		int age;
		float score;
	};
	int main()
	{
		struct S s = { "zhangsan", 18, 90.45f };
		FILE* pf = fopen("data.txt", "w");
		if (pf == NULL)
		{
			printf("%s\n", strerror(errno));
			return -1;
		}
		// 格式化写入
		fprintf(pf, "%s %d %f", s.name, s.age, s.score);
		// 关闭文件
		fclose(pf);
		pf = NULL;
	}
	struct S
	{
		char name[20];
		int age;
		float score;
	};
	int main()
	{
		struct S s = { 0 };
		FILE* pf = fopen("data.txt", "r");
		if (pf == NULL)
		{
			printf("%s\n", strerror(errno));
			return -1;
		}
		// 格式化读取
		fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
		printf("%s %d %f", s.name, s.age, s.score);
		// 关闭文件
		fclose(pf);
		pf = NULL;
	}
	struct Stu
	{
		char name[20];
		int age;
		float score;
	};
	struct Stu
	{
		char name[20];
		int age;
		float score;
	};
	int main()
	{
		struct Stu s = { "zhangsan", 20, 66.5f };
		char buf[200] = { 0 };
		sprintf(buf, "%s %d %f", s.name, s.age, s.score);
		printf("%s\n", buf);
	}//按照字符串的形式打印
	int main()
	{
		struct Stu s = { "zhangsan", 20, 99.5 };
		FILE* pf = fopen("data.txt", "wb");
		if (pf == NULL)
		{
			printf("%s\n", strerror(errno);
			return 1;
		}
		//写文件
		//fwrite(&s, sizeof(s), 1, pf);
		//读文件
		fread(&s, sizeof(struct Stu), 1, pf);
		fclose(pf);
		pf = NULL;
		return 0;
		return 0;
	}
	int main()
	{
		int a = 10000;
		FILE* pf = fopen("bin.dat", "wb");
		if (pf == NULL)
		{
			printf("%s", strerror(errno));
			return 1;
		}
		fwrite(&a, sizeof(int), 1, pf);
		fclose(pf);
		pf = NULL;
		return 0;
	}
	int main()
	{
		FILE* pf = fopen("data.txt", "r");
		if (pf == NULL)
		{
			printf("%s", strerror(errno));
			return 1;
		}
		//读取
		int ch = fgetc(pf);
		printf("%c\n", ch);
		ch = fgetc(pf);
		printf("%c\n", ch);
		printf("%c\n",ftell(pf));
		//定位文件指针到文件的起始位置
		fseek(pf, -2, SEEK_CUR);
		fclose(pf);
		pf = NULL;
		return 0;
	}