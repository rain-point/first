#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<errno.h>
	int main()
	{
		//fopen���������д����ʽ��
		//����ļ������ڣ��ᴴ������ļ�
		//����ļ����ڣ�������ļ�������
		//fopen����������Զ��ķ�ʽ��
		//�ļ������ڣ���ʧ��
		FILE* pf = fopen("data.txt", "w");
		if (pf == NULL)
		{
			printf("%s\n", strerrno(errno));
			return 1;
		}
		//д�ļ�
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
		//�ر��ļ�
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
		//дһ������
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
		// ���ļ��ɹ������ļ�
		int ch = 0;
		while ((ch = fgetc(pf)) != EOF)
		{
			printf("%c\n", ch);
		}
		// �ر��ļ�
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
		fputs("hello\n", pf); // pfҲ�ɸĳ� stdout
		fputs("hello world\n", pf); // pf Ҳ�ɸĳ� stdout
		// �ر��ļ�
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
		// ��ʽ��д��
		fprintf(pf, "%s %d %f", s.name, s.age, s.score);
		// �ر��ļ�
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
		// ��ʽ����ȡ
		fscanf(pf, "%s %d %f", s.name, &(s.age), &(s.score));
		printf("%s %d %f", s.name, s.age, s.score);
		// �ر��ļ�
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
	}//�����ַ�������ʽ��ӡ
	int main()
	{
		struct Stu s = { "zhangsan", 20, 99.5 };
		FILE* pf = fopen("data.txt", "wb");
		if (pf == NULL)
		{
			printf("%s\n", strerror(errno);
			return 1;
		}
		//д�ļ�
		//fwrite(&s, sizeof(s), 1, pf);
		//���ļ�
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
		//��ȡ
		int ch = fgetc(pf);
		printf("%c\n", ch);
		ch = fgetc(pf);
		printf("%c\n", ch);
		printf("%c\n",ftell(pf));
		//��λ�ļ�ָ�뵽�ļ�����ʼλ��
		fseek(pf, -2, SEEK_CUR);
		fclose(pf);
		pf = NULL;
		return 0;
	}