#pragma once
#include "BaseClass.h"
class BulkPrice : public BaseClass
{
public:
	BulkPrice();
	virtual ~BulkPrice();
	double CalcPriceRate()override;
	static double GetBasePriceRate();
private:
	size_t BulkPirce = { 10 };
};

