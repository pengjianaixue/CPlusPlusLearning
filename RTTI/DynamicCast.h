#pragma once
#include "../OOP/BaseClass.h"
#include "../OOP/BulkPrice.h"
/*
dynamic_cast 只有以下三种形式，首先type必须是类类型，
dynamic_cast<type*>(e) e必须是一个有效的指针
dynamic_cast<type&>(e) e必须是一个左值
dynamic_cast<type&&>(e) e不能是左值(右值，右值引用或字面值)

！只有以下三种条件才能够转换成功
1：e的类型是type的公有派生类
2：e的类型是type的公有基类
3：e的类型就是type的类型
总结而言：就是e要么就是type类型，要么就是具有公有的继承关系

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