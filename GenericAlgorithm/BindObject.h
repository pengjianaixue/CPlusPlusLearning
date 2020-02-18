#pragma once
#include "../UsedHeader/STLHeader.h"


inline void bindUesFunction(int a, const std::string& b, double c, long long d)
{
	double i = (c / a)*d + std::stod(b);
	std::cout << "Bind function run result:"<<i << std::endl;
	


}


void bindObject(void)
{
	int a = 100;
	double c = 15.36;
	long long d = 152;
	std::string b = "456.36";
	/* 此处使用了std::cref来传递std::string 的引用,以及使用了std::placeholders来将testBind的第一个参数传递给bindUesFunction
	  的第三个形参,第二个参数传递bindUesFunction的第一个形参.
	*/
	auto testBind = std::bind(bindUesFunction, std::placeholders::_2, std::cref(b), std::placeholders::_1, d);
	testBind(235.2, 10);
	



}