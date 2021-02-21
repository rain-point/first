#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include"seqlist.h"
void TestSeqList1()
{ 
	//²âÊÔÍ·Î²µÄ²åÈëÉ¾³ı
	SL s;
	seqlistpushback(&s, 1);
	seqlistpushback(&s, 2);
	seqlistpushback(&s, 3);

}
int main()
{   
	return 0;
}