#pragma once
#include "../UsedHeader/STLHeader.h"
#ifdef __cplusplus
		
// ���������дC++�Ĵ���

#endif // __CPlusPlus
// ���ǲ�����ģ��������Ҫ�������������c�����ã���Ϊc����û�������ͣ��Լ�û��string���ͣ������Ǵ����
//extern "C" std::string cplusplusString(const std::string& str)
//{
//	return	std::string{};
//}
// �����ǿ��Եģ���Ϊ const char * ��C���������ǿ��õ�
extern "C"  DllSymbol   const char* cString(const char* str)
{
	return	"C str";
}
/*
���´���Ҳ�Ǵ���ģ���ΪC����û�к������أ���������extern ����Ҳ�Ǵ����
*/
//extern "C" int add(int a, int b)
//{
//	return a + b;
//}
//extern "C" double add(double a, double b)
//{
//	return a + b;
//}
