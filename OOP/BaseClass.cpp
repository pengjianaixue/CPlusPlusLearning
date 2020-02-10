#include "stdafx.h"
#include "BaseClass.h"


BaseClass::BaseClass() 
{

}


BaseClass::~BaseClass()
{

}

double BaseClass::GetBasePriceRate()
{
	return 9.0;
}

size_t BaseClass::GetBasePrice() const
{
	return this->price;
}

double BaseClass::CalcPriceRate()
{
	return Baserate*price;
}

std::string BaseClass::GetClassName()
{
	return std::string();
}
