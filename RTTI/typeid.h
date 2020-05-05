#pragma once
#include "../UsedHeader/STLHeader.h"
#include "../OOP/BaseClass.h"
#include "../OOP/BulkPrice.h"

/*
typeid 是一个运算符，它返回type_info类对象
typeid(e)，e可以是任何表达式或者类型，包括原生类型(int double等)
typeid之所以能够被成为RTTI(运行时类型识别)，是因为它可以识别表达式或者变量的动态类型
例如：
        BaseClass *classPoint = new ChildClass()；
        typeid(*classpoint) 会返回ChildClass的类型信息
但是BaseClass必须包含虚函数，不然typeid会直接返回其静态类型，还是返回BaseClass的类型信息
当我们使用typeid识别动态类型时，应该作用于对象，不能直接作用于指针，因为这样会直接返回指针的静态类型
例如：
	BaseClass *classPoint = new ChildClass()；
	if(typeid(classpoint) == typeid(ChildClass))
	{
		//不会执行到这里，因为typeid(classpoint)返回的类型为BaseClass 的指针,等于typeid(BaseClass*)

	}
	此处应该是
	BaseClass *classPoint = new ChildClass()；
	if(typeid(*classpoint) == typeid(ChildClass))
	{
		//进入if ，因为*classpoint 的动态类型就是ChildClass

	}
*/
void dynamicType()
{
	BaseClass *pBaseClass{ new BulkPrice };
	if (typeid(*pBaseClass) == typeid(BulkPrice))
	{
		std::cout << "pBaseClass  dynamic type is BulkPrice" << std::endl;
		std::cout << "pBaseClass  dynamic type name is:" << typeid(*pBaseClass).name() << std::endl;
	}
	else
	{
		std::cout << "pBaseClass  dynamic type is not BulkPrice" << std::endl;
	}

	

}