#define _CRT_SECURE_NO_WARNINGS 1
//1. ��ͨ�������ռ�
namespace N1 // N1Ϊ�����ռ������
{
	// �����ռ��е����ݣ��ȿ��Զ��������Ҳ���Զ��庯��
	int a;
	int Add(int left, int right)
	{
		return left + right;
	}
}
//2. �����ռ����Ƕ��
namespace N2
{
	int a;
	int b;
	int Add(int left, int right)
	{
		return left + right;
	}

	namespace N3
	{
		int c;
		int d;
		int Sub(int left, int right)
		{
			return left - right;
		}

	}
	//3. ͬһ��������������ڶ����ͬ���Ƶ������ռ�,����������ϳ�ͬһ�������ռ��С�
	namespace N1
	{
		int Mul(int left, int right)
		{
			return left * right;
		}
	}

