#pragma once
#include "../OOP/BaseClass.h"
#include "../OOP/BulkPrice.h"
/*
dynamic_cast ֻ������������ʽ������type�����������ͣ�
dynamic_cast<type*>(e) e������һ����Ч��ָ��
dynamic_cast<type&>(e) e������һ����ֵ
dynamic_cast<type&&>(e) e��������ֵ(��ֵ����ֵ���û�����ֵ)

��ֻ�����������������ܹ�ת���ɹ�
1��e��������type�Ĺ���������
2��e��������type�Ĺ��л���
3��e�����;���type������
�ܽ���ԣ�����eҪô����type���ͣ�Ҫô���Ǿ��й��еļ̳й�ϵ

*/


void childToParentCast()
{
	BaseClass *pBaseClass{ new BulkPrice() };
	if (BulkPrice* pChild = dynamic_cast<BulkPrice*>(pBaseClass))
	{
		std::cout << "dynamic_cast success" << std::endl;

	}
	else
	{
		std::cout << "dynamic_cast failed" << std::endl;
	}
	
}
void parentToChild()
{
	BulkPrice *pChild{ new BulkPrice() };
	if (BaseClass* pBaseClass = dynamic_cast<BaseClass*>(pChild))
	{
		std::cout << "dynamic_cast success" << std::endl;

	}
	else
	{
		std::cout << "dynamic_cast failed" << std::endl;
	}

}
void sameTypeCast()
{
	BulkPrice *pChild{ new BulkPrice() };
	if (BulkPrice* pChild_1 = dynamic_cast<BulkPrice*>(pChild))
	{
		std::cout << "dynamic_cast success" << std::endl;

	}
	else
	{
		std::cout << "dynamic_cast failed" << std::endl;
	}

}