#pragma once
#include "../UsedHeader/STLHeader.h"
#ifdef __cplusplus
		
// 在这里面编写C++的代码

#endif // __CPlusPlus
// 这是不允许的，如果我们要导出这个函数给c语言用，因为c语言没有类类型，以及没有string类型，所以是错误的
//extern "C" std::string cplusplusString(const std::string& str)
//{
//	return	std::string{};
//}
// 这样是可以的，因为 const char * 在C语言里面是可用的
extern "C"  DllSymbol   const char* cString(const char* str)
{
	return	"C str";
}
/*
以下代码也是错误的，因为C语言没有函数重载，所以以下extern 到处也是错误的
*/
//extern "C" int add(int a, int b)
//{
//	return a + b;
//}
//extern "C" double add(double a, double b)
//{
//	return a + b;
//}
