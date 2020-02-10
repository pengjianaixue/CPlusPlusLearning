// C++ Primer.cpp : 定义控制台应用程序的入口点。
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

	/*                           *******                     C++ 基础                     *******                       */
	//对于指针和引用从右往左读会更加利于理解；
	int **K=nullptr;
	int  **&i = K; //i是一个int 类型引用的二级指针；
	int j = 42;
	int *h = &j;
	K = &h;
	**i = 0;
	std::cout << j << std::endl;
	const double C_Double = 2.14;
	double D_Double = 2.14;
	//double &C_DOuble = C_Double; //错误,常量引用只能绑定在常量应用上；
	const double &CC_DOuble = C_Double; 
	const double &C_DOuble = D_Double; //常量引用可以绑定在非常量变量上，但是不可以通过这个引用改变这个变量的值；
	//double *P_Double = &C_Double;//错误,非常量指针不能指向常量；
	const double *CP_Double = &C_Double;//

	const double *P_Double = &D_Double;//指向常量的指针可以指向在非常量变量上，但是不可以通过这个指针改变这个变量的值

	//*P_Double = 8; //错误，不能对const 修饰的变量赋值；

	int Vaule = 90;

	int *const CP_Vaule = &Vaule; //*在const前面代表是常量指针，必须初始化，而且初始化后他的地址就不能再改变了，顶层const;

	const double  DC_Vaule = 2.13;

	const double *PDC_Vaule = &DC_Vaule; //PDC_Vaule 是一个指向double常量的指针 底层const；  

	/**************************** Warining**************************
					1：所有的常量类型必须要初始化
					2：初始化是在定义时赋值；

					3：顶层const代表本身是常量类型，底层const是指向的类型为const;
	****************************    **************************/

	auto item = 1 + 3;

	const auto  i_atuo = 42;
	auto  j_auto = i_atuo;//j_auto是int类型常量
	const auto &k = i_atuo;// k是  int 类型常量的引用  
	auto *p = &i_atuo; // p是  指向int 类型常量的指针  
	const auto j2 = i_atuo,&k2= i_atuo; // j2是int类型常量，k2是 int类型常量的常引用
	cout << endl;
	const char* constchar = "";
	char* charponiter = const_cast<char*>(constchar);


	/*                *******                     字符串和向量以及数组                    *******                   */

	/*
	Titile:3.2.2节练习题
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
	Titile:3.3.3节练习题
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
 
