#include "stdafx.h"
#include "../UsedHeader/STLHeader.h"
 
extern bool b;

inline int lambdaTest()
{

	std::cout << "Lambda test start" << std::endl;
	std::vector<std::string> vec;
	int k{};
	double j{1.1};
	static long long t{ 1000 };
	for (size_t i = 0; i < 100; i++)
	{
		vec.push_back(std::to_string(i));
	}
	// 引用捕获加参数列表
	std::for_each(vec.begin(), vec.end(), [&k](std::string str) { k += std::stol(str); });
	std::cout << "Ref capture:"<<k << std::endl;

	// 值捕获加mutable修改局部变量(mutable 修改后的值必须要用return才有效果)
	auto f = [k](std::string str) mutable { k += std::stol(str); return k; };
	k = f("100");
	std::cout << "value capture and mutable:" << k << std::endl;
	// 引用隐式捕获
	std::for_each(vec.begin(), vec.end(), [&](std::string str) { k += std::stol(str); });
	std::cout << "Implicit Ref capture and mutable:" << k << std::endl;
	// 值隐式捕获
	auto fn = [=](std::string str) mutable { k += std::stol(str); return k; };
	k = fn("100");
	std::cout << "Implicit value capture and mutable:" << k << std::endl;
	// 混合捕获
	auto fn2 = [=, &j](std::string str) mutable { k += std::stol(str); j *= k; return k; };
	k = fn2("100");
	std::cout << "Mix capture and mutable:" << k << std::endl;
	// 指定返回值
	auto fn3 = [=, &j](std::string str)mutable ->int { k += std::stol(str); j *= k; if (j > 1000) { return 0; } else { return 1; } };
	k = fn3("100");
	std::cout << "return type specially:" << k << std::endl;
	// 直接使用函数的static变量和函数外名称
	auto fn4 = [=, &j](std::string str)mutable ->int { k += std::stol(str); j *= k; if (j > t && b) { return 0; } else { return 1; } };
	k = fn4("100");
	std::cout << "static var and external var use:" << k << std::endl;
	std::cout << "Lambda test end" << std::endl;
	return 0;

}