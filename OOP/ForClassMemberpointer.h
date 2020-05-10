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

// ��Ա����ָ�������Ͳ���
void testFunMemberPointer()
{
	test a;
	int (test::*pointerOne)(const std::string, double ) = nullptr;
	int (test::*pointerTwo)(const std::string, double ) = nullptr;
	pointerOne = &test::funMemberPointer;//��ʱ��Ա����ָ�뻹û��ָ���κζ���
	pointerTwo = &test::funOverMemberPointer;//����ֻҪ������Ϊ��ͬ������԰󶨵��κδ����͵��κ�ͬ��ʽ�ĺ�����
	//ʹ�ó�Ա����ָ����ó�Ա����
	std::cout << "function member pointer call" << (a.*pointerOne)("", 89.0) << std::endl;
	std::cout << "function member pointer call" << (a.*pointerTwo)("", 89) << std::endl;
	// ���ǿ����ñ�����������ӿɶ���
	using FunMemberPointer = int (test::*)(const std::string, double);
	FunMemberPointer pointerOneOtherName = &test::funMemberPointer;
	(a.*pointerOneOtherName)("", 89);
	// ʹ��functional��������װ
	std::function<int(test&, const std::string, double)> functionalOb = { pointerOne };
	//std::cout << "std::function callble object member pointer call" << functionalOb("", 89.0) << std::endl;
	//std::mem_fn(&test::funMemberPointer) mem_fn1; // ��Ա����functionh����,ר�����ڻ�ȡ��Ա��ָ��
}
// ��Ա����ָ�������Ͳ���
void testDataMemberPointer()
{
	test a;
	const std::string test::* dataMemberPointer = {nullptr};
	dataMemberPointer = test::getDataMemberPointer();//��ʱ��Ա����ָ�뻹û��ָ���κζ���
	//ʹ�ó�Ա����ָ����ó�Ա����
	std::string test = a.*dataMemberPointer;
	std::cout << "class data member call:" << test << std::endl;
	// ���ǿ����ñ�����������ӿɶ���
	using FunMemberPointer = const std::string test::*;
	FunMemberPointer pointerOneOtherName = test::getDataMemberPointer();
	test = a.*pointerOneOtherName;
	std::cout << "class data member OtherName call:" << test << std::endl;
}

