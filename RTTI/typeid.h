#pragma once
#include "../UsedHeader/STLHeader.h"
#include "../OOP/BaseClass.h"
#include "../OOP/BulkPrice.h"

/*
typeid ��һ���������������type_info�����
typeid(e)��e�������κα��ʽ�������ͣ�����ԭ������(int double��)
typeid֮�����ܹ�����ΪRTTI(����ʱ����ʶ��)������Ϊ������ʶ����ʽ���߱����Ķ�̬����
���磺
        BaseClass *classPoint = new ChildClass()��
        typeid(*classpoint) �᷵��ChildClass��������Ϣ
����BaseClass��������麯������Ȼtypeid��ֱ�ӷ����侲̬���ͣ����Ƿ���BaseClass��������Ϣ
������ʹ��typeidʶ��̬����ʱ��Ӧ�������ڶ��󣬲���ֱ��������ָ�룬��Ϊ������ֱ�ӷ���ָ��ľ�̬����
���磺
	BaseClass *classPoint = new ChildClass()��
	if(typeid(classpoint) == typeid(ChildClass))
	{
		//����ִ�е������Ϊtypeid(classpoint)���ص�����ΪBaseClass ��ָ��,����typeid(BaseClass*)

	}
	�˴�Ӧ����
	BaseClass *classPoint = new ChildClass()��
	if(typeid(*classpoint) == typeid(ChildClass))
	{
		//����if ����Ϊ*classpoint �Ķ�̬���;���ChildClass

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