#define _CRT_SECURE_NO_WARNINGS 1
#include"seqlist.h"
//尾插尾删 头插头删
void seqlistpushback(SL* ps, SLdatatype x);
void seqlistpopback(SL* ps);
void seqlistpushback(SL* ps, SLdatatype x);
void seqlistpopback(SL* ps);
//任意位置的插入删除
void seqlistinsert(SL* ps, int pos, SLdatatype);
void seqlisterase(SL* ps, int pos);
void seqlistinit(SL s);

