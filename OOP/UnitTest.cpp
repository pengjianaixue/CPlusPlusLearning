// OOP.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include "BulkPrice.h"

int main()
{
	BaseClass *subobjectTest = {nullptr};
	subobjectTest = new BulkPrice;
	printf("PriceRate is %f\n\r", subobjectTest->CalcPriceRate());
	delete subobjectTest;
	system("pause");
    return 0;
}

