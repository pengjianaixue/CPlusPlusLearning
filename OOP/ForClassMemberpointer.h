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

// ��Ա����ָ�������Ͳ���
void testFunMemberPointer()
{
	test a;
	int (test::*pointerOne)(const std::string, double ) = nullptr;
	int (test::*pointerTwo)(const std::string, double ) = nullptr;
	pointerOne = &test::funMemberPointer;//��ʱ��Ա����ָ�뻹û��ָ���κζ���
	pointerTwo = &test::funOverMemberPointer;//����ֻҪ������Ϊ��ͬ������԰󶨵��κδ����͵��κ�ͬ��ʽ�ĺ�����
	//ʹ�ó�Ա����ָ����ó�Ա����
	(a.*pointerOne)("", 89.0);
	(a.*pointerTwo)("", 89);
	// ���ǿ����ñ�����������ӿɶ���
	using FunMemberPointer = int (test::*)(const std::string, double);
	FunMemberPointer pointerOneOtherName = &test::funMemberPointer;
	(a.*pointerOneOtherName)("", 89);
	// ʹ��functional��������װ
	std::function<int(test&, const std::string, double)> functionalOb = { pointerOne };

	//std::mem_fn(&test::funMemberPointer) mem_fn1; // ��Ա����functionh����
}
// ��Ա����ָ�������Ͳ���
void testFunMemberPointer()
{
	test a;
	int (test::*pointerOne)(const std::string, double size) = nullptr;
	pointerOne = &test::funMemberPointer;//��ʱ��Ա����ָ�뻹û��ָ���κζ���
	//ʹ�ó�Ա����ָ����ó�Ա����
	(a.*pointerOne)("", 89);
	// ���ǿ����ñ�����������ӿɶ���
	using FunMemberPointer = int (test::*)(const std::string, double size);
	FunMemberPointer pointerOneOtherName = &test::funMemberPointer;
	(a.*pointerOneOtherName)("", 89);
}

