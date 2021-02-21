#pragma once
typedef int SLdatatype;
#define N 10
typedef struct seqlist
{
	SLdatatype a[10];
	int size;//有效数据的个数
	int capacity;//容量
}SL,seqlist;
//尾插尾删 头插头删
void seqlistinit(SL );
void seqlistpushback(SL* ps, SLdatatype x);
void seqlistpopback(SL* ps); 
void seqlistpushback(SL* ps, SLdatatype x);
void seqlistpopback(SL* ps);
//任意位置的插入删除
void seqlistinsert(SL* ps, int pos, SLdatatype);
void seqlisterase(SL* ps, int pos);


