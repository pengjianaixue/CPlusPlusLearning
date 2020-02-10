#pragma once
#include <string>
class BaseClass
{
public:
	BaseClass();
	virtual ~BaseClass();//Base Class need define is as virtual
	static double GetBasePriceRate();
	size_t GetBasePrice() const;
	virtual double CalcPriceRate();
private:
	std::string	 GetClassName();
private:
	size_t  price = {10};
protected:
	double Baserate = {9.0};
};

