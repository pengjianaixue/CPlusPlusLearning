// OOP.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "BulkPrice.h"
#include "ForClassMemberpointer.h"
int main()
{
	BaseClass *subobjectTest = {nullptr};
	subobjectTest = new BulkPrice;
	printf("PriceRate is %f\n\r", subobjectTest->CalcPriceRate());
	delete subobjectTest;
	testFunMemberPointer();
	testDataMemberPointer();
	system("pause");
    return 0;
}

