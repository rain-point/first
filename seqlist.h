#pragma once
typedef int SLdatatype;
#define N 10
typedef struct seqlist
{
	SLdatatype a[10];
	int size;//��Ч���ݵĸ���
	int capacity;//����
}SL,seqlist;
//β��βɾ ͷ��ͷɾ
void seqlistinit(SL );
void seqlistpushback(SL* ps, SLdatatype x);
void seqlistpopback(SL* ps); 
void seqlistpushback(SL* ps, SLdatatype x);
void seqlistpopback(SL* ps);
//����λ�õĲ���ɾ��
void seqlistinsert(SL* ps, int pos, SLdatatype);
void seqlisterase(SL* ps, int pos);


