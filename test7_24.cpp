#define _CRT_SECURE_NO_WARNINGS 1
#include<iostream>
using namespace std;

	int main()	{
	    FILE* fp = fopen("test.txt", "w+");
    if (fp == NULL)
    {
     	printf("�ļ���ʧ��!\n");		     
		exit(1);
    }
	    fwrite("bit person!", sizeof(char), 11, fp);
		    fseek(fp, 0, SEEK_CUR);
	    char arr[100];
		    fread(arr, sizeof(char), strlen(arr), fp);
	printf("%s\n", arr);
		    fclose(fp);
		    return 0;
		}
