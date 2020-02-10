// OOP.cpp : 定义控制台应用程序的入口点。
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

