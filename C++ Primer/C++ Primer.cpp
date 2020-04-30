// C++ Primer.cpp : 
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
//不能返回局部变量的引用
int& ReturnRef()
{

	int i ;
	i = 10;
	return i;

}
int main()
{	

	//
	int **K=nullptr;
	int  **&i = K; 
	int j = 42;
	int *h = &j;
	K = &h;
	**i = 0;
	std::cout << j << std::endl;
	const double C_Double = 2.14;
	double D_Double = 2.14;
	//double &C_DOuble = C_Double; 
	const double &CC_DOuble = C_Double; 
	const double &C_DOuble = D_Double; //
	//double *P_Double = &C_Double;//
	const double *CP_Double = &C_Double;//

	const double *P_Double = &D_Double;//

	//*P_Double = 8; //

	int Vaule = 90;

	int *const CP_Vaule = &Vaule; //

	const double  DC_Vaule = 2.13;

	const double *PDC_Vaule = &DC_Vaule; //PDC_Vaule 

	/**************************** Warining**************************

	****************************    **************************/

	auto item = 1 + 3;

	const auto  i_atuo = 42;
	auto  j_auto = i_atuo;//
	const auto &k = i_atuo;// 
	auto *p = &i_atuo; // 
	const auto j2 = i_atuo,&k2= i_atuo; // 
	cout << endl;
	const char* constchar = "";
	char* charponiter = const_cast<char*>(constchar);
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
	Titile:3.3.3陆脷脕路脧掳脤芒
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
 
