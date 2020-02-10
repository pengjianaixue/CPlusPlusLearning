#include "stdafx.h"
#include "BulkPrice.h"


BulkPrice::BulkPrice()
{
}


BulkPrice::~BulkPrice()
{

}

double BulkPrice::CalcPriceRate()
{
	return (BulkPirce*BaseClass::GetBasePriceRate());
}

double BulkPrice::GetBasePriceRate()
{
	return 8.0;
}
