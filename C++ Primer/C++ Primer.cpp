// C++ Primer.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<functional>
#include<iostream>
#include<string>
#include<vector>
using namespace ::std;
struct  foo
{

};
int ReturnCopy()
{

	int i = 10;
	return i;

}
int& ReturnRef()
{

	int i ;
	i = 10;
	return i;

}
int main()
{	

	/*                           *******                     C++ ����                     *******                       */
	//����ָ������ô�������������������⣻
	int **K=nullptr;
	int  **&i = K; //i��һ��int �������õĶ���ָ�룻
	int j = 42;
	int *h = &j;
	K = &h;
	**i = 0;
	std::cout << j << std::endl;
	const double C_Double = 2.14;
	double D_Double = 2.14;
	//double &C_DOuble = C_Double; //����,��������ֻ�ܰ��ڳ���Ӧ���ϣ�
	const double &CC_DOuble = C_Double; 
	const double &C_DOuble = D_Double; //�������ÿ��԰��ڷǳ��������ϣ����ǲ�����ͨ��������øı����������ֵ��
	//double *P_Double = &C_Double;//����,�ǳ���ָ�벻��ָ������
	const double *CP_Double = &C_Double;//

	const double *P_Double = &D_Double;//ָ������ָ�����ָ���ڷǳ��������ϣ����ǲ�����ͨ�����ָ��ı����������ֵ

	//*P_Double = 8; //���󣬲��ܶ�const ���εı�����ֵ��

	int Vaule = 90;

	int *const CP_Vaule = &Vaule; //*��constǰ������ǳ���ָ�룬�����ʼ�������ҳ�ʼ�������ĵ�ַ�Ͳ����ٸı��ˣ�����const;

	const double  DC_Vaule = 2.13;

	const double *PDC_Vaule = &DC_Vaule; //PDC_Vaule ��һ��ָ��double������ָ�� �ײ�const��  

	/**************************** Warining**************************
					1�����еĳ������ͱ���Ҫ��ʼ��
					2����ʼ�����ڶ���ʱ��ֵ��

					3������const�������ǳ������ͣ��ײ�const��ָ�������Ϊconst;
	****************************    **************************/

	auto item = 1 + 3;

	const auto  i_atuo = 42;
	auto  j_auto = i_atuo;//j_auto��int���ͳ���
	const auto &k = i_atuo;// k��  int ���ͳ���������  
	auto *p = &i_atuo; // p��  ָ��int ���ͳ�����ָ��  
	const auto j2 = i_atuo,&k2= i_atuo; // j2��int���ͳ�����k2�� int���ͳ����ĳ�����
	cout << endl;
	const char* constchar = "";
	char* charponiter = const_cast<char*>(constchar);


	/*                *******                     �ַ����������Լ�����                    *******                   */

	/*
	Titile:3.2.2����ϰ��
	Time:2018.4.14
	*/
	//string s;
	//int vcount = 0;
	//while (getline(cin, s)&& vcount<50)
	//{
	//	vcount++;
	//	int vIndex = 0;	
	//	int Length = s.length();
	//	while (Length- vIndex>0)
	//	{
	//		if (s[vIndex]!=' ')
	//		{
	//			cout << s[vIndex];

	//		}
	//		else
	//		{
	//			cout << endl;
	//		}
	//		vIndex ++ ;
	//	}
	//}
	/*
	Titile:3.3.3����ϰ��
	Time:2018.4.14
	*/
	//vector<string> strvec;
	//string str;
	//while(getline(cin, str))
	//{
	//	strvec.push_back(str);
	//	
	//	for (auto it = strvec.begin(); it!=strvec.end();it++)
	//	{	
	//		
	//		//*it = toupper(*it);
	//		;
	//	}
	//}
	int Copy;
	Copy = ReturnCopy();
	cout << Copy << endl;
	int Ref;
	Ref = ReturnRef();
	cout << Ref << endl;

	system("pause");
    return 0;
}
 
