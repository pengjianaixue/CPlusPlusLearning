#pragma once
#include "../UsedHeader/STLHeader.h"
class test
{
public:
	test() {};
	~test() {};
	inline int funMemberPointer(const std::string str, double size) { return str.size() + static_cast<int>(size); };
	inline int funMemberPointer(const std::string str, int size) { return str.size() + size; };
	inline int funOverMemberPointer(const std::string str, double size) { return str.size() + static_cast<int>(size); };
	static  const std::string test::* getDataMemberPointer()
	{
		return &test::m_dataMemerPointer;
	}
private:
	const std::string m_dataMemerPointer{"dataMemer"};

};

// 成员函数指针声明和测试
void testFunMemberPointer()
{
	test a;
	int (test::*pointerOne)(const std::string, double ) = nullptr;
	int (test::*pointerTwo)(const std::string, double ) = nullptr;
	pointerOne = &test::funMemberPointer;//此时成员函数指针还没有指向任何对象；
	pointerTwo = &test::funOverMemberPointer;//函数只要声明行为相同，则可以绑定到任何此类型的任何同形式的函数上
	//使用成员函数指针调用成员函数
	std::cout << "function member pointer call" << (a.*pointerOne)("", 89.0) << std::endl;
	std::cout << "function member pointer call" << (a.*pointerTwo)("", 89) << std::endl;
	// 我们可以用别名是这个更加可读；
	using FunMemberPointer = int (test::*)(const std::string, double);
	FunMemberPointer pointerOneOtherName = &test::funMemberPointer;
	(a.*pointerOneOtherName)("", 89);
	// 使用functional对象来包装
	std::function<int(test&, const std::string, double)> functionalOb = { pointerOne };
	//std::cout << "std::function callble object member pointer call" << functionalOb("", 89.0) << std::endl;
	//std::mem_fn(&test::funMemberPointer) mem_fn1; // 成员函数functionh对象,专门用于获取成员的指针
}
// 成员变量指针声明和测试
void testDataMemberPointer()
{
	test a;
	const std::string test::* dataMemberPointer = {nullptr};
	dataMemberPointer = test::getDataMemberPointer();//此时成员函数指针还没有指向任何对象；
	//使用成员函数指针调用成员函数
	std::string test = a.*dataMemberPointer;
	std::cout << "class data member call:" << test << std::endl;
	// 我们可以用别名是这个更加可读；
	using FunMemberPointer = const std::string test::*;
	FunMemberPointer pointerOneOtherName = test::getDataMemberPointer();
	test = a.*pointerOneOtherName;
	std::cout << "class data member OtherName call:" << test << std::endl;
}

