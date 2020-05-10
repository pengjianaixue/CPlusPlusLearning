#pragma once
#include "../UsedHeader/STLHeader.h"
class test
{
public:
	test() {};
	~test() {};
	inline int funMemberPointer(const std::string, double size) { return false; };
	inline int funMemberPointer(const std::string, int size) { return false; };
	inline int funOverMemberPointer(const std::string, double size) { return false; };
	
private:
	const std::string m_dataMemerPointer{};

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
	(a.*pointerOne)("", 89.0);
	(a.*pointerTwo)("", 89);
	// 我们可以用别名是这个更加可读；
	using FunMemberPointer = int (test::*)(const std::string, double);
	FunMemberPointer pointerOneOtherName = &test::funMemberPointer;
	(a.*pointerOneOtherName)("", 89);
	// 使用functional对象来包装
	std::function<int(test&, const std::string, double)> functionalOb = { pointerOne };

	//std::mem_fn(&test::funMemberPointer) mem_fn1; // 成员函数functionh对象
}
// 成员函数指针声明和测试
void testFunMemberPointer()
{
	test a;
	int (test::*pointerOne)(const std::string, double size) = nullptr;
	pointerOne = &test::funMemberPointer;//此时成员函数指针还没有指向任何对象；
	//使用成员函数指针调用成员函数
	(a.*pointerOne)("", 89);
	// 我们可以用别名是这个更加可读；
	using FunMemberPointer = int (test::*)(const std::string, double size);
	FunMemberPointer pointerOneOtherName = &test::funMemberPointer;
	(a.*pointerOneOtherName)("", 89);
}

