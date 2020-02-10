// C++ Primer.cpp : ¶¨Òå¿ØÖÆÌ¨Ó¦ÓÃ³ÌÐòµÄÈë¿Úµã¡£
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

	/*                           *******                     C++ »ù´¡                     *******                       */
	//¶ÔÓÚÖ¸ÕëºÍÒýÓÃ´ÓÓÒÍù×ó¶Á»á¸ü¼ÓÀûÓÚÀí½â£»
	int **K=nullptr;
	int  **&i = K; //iÊÇÒ»¸öint ÀàÐÍÒýÓÃµÄ¶þ¼¶Ö¸Õë£»
	int j = 42;
	int *h = &j;
	K = &h;
	**i = 0;
	std::cout << j << std::endl;
	const double C_Double = 2.14;
	double D_Double = 2.14;
	//double &C_DOuble = C_Double; //´íÎó,³£Á¿ÒýÓÃÖ»ÄÜ°ó¶¨ÔÚ³£Á¿Ó¦ÓÃÉÏ£»
	const double &CC_DOuble = C_Double; 
	const double &C_DOuble = D_Double; //³£Á¿ÒýÓÃ¿ÉÒÔ°ó¶¨ÔÚ·Ç³£Á¿±äÁ¿ÉÏ£¬µ«ÊÇ²»¿ÉÒÔÍ¨¹ýÕâ¸öÒýÓÃ¸Ä±äÕâ¸ö±äÁ¿µÄÖµ£»
	//double *P_Double = &C_Double;//´íÎó,·Ç³£Á¿Ö¸Õë²»ÄÜÖ¸Ïò³£Á¿£»
	const double *CP_Double = &C_Double;//

	const double *P_Double = &D_Double;//Ö¸Ïò³£Á¿µÄÖ¸Õë¿ÉÒÔÖ¸ÏòÔÚ·Ç³£Á¿±äÁ¿ÉÏ£¬µ«ÊÇ²»¿ÉÒÔÍ¨¹ýÕâ¸öÖ¸Õë¸Ä±äÕâ¸ö±äÁ¿µÄÖµ

	//*P_Double = 8; //´íÎó£¬²»ÄÜ¶Ôconst ÐÞÊÎµÄ±äÁ¿¸³Öµ£»

	int Vaule = 90;

	int *const CP_Vaule = &Vaule; //*ÔÚconstÇ°Ãæ´ú±íÊÇ³£Á¿Ö¸Õë£¬±ØÐë³õÊ¼»¯£¬¶øÇÒ³õÊ¼»¯ºóËûµÄµØÖ·¾Í²»ÄÜÔÙ¸Ä±äÁË£¬¶¥²ãconst;

	const double  DC_Vaule = 2.13;

	const double *PDC_Vaule = &DC_Vaule; //PDC_Vaule ÊÇÒ»¸öÖ¸Ïòdouble³£Á¿µÄÖ¸Õë µ×²ãconst£»  

	/**************************** Warining**************************
					1£ºËùÓÐµÄ³£Á¿ÀàÐÍ±ØÐëÒª³õÊ¼»¯
					2£º³õÊ¼»¯ÊÇÔÚ¶¨ÒåÊ±¸³Öµ£»

					3£º¶¥²ãconst´ú±í±¾ÉíÊÇ³£Á¿ÀàÐÍ£¬µ×²ãconstÊÇÖ¸ÏòµÄÀàÐÍÎªconst;
	****************************    **************************/

	auto item = 1 + 3;

	const auto  i_atuo = 42;
	auto  j_auto = i_atuo;//j_autoÊÇintÀàÐÍ³£Á¿
	const auto &k = i_atuo;// kÊÇ  int ÀàÐÍ³£Á¿µÄÒýÓÃ  
	auto *p = &i_atuo; // pÊÇ  Ö¸Ïòint ÀàÐÍ³£Á¿µÄÖ¸Õë  
	const auto j2 = i_atuo,&k2= i_atuo; // j2ÊÇintÀàÐÍ³£Á¿£¬k2ÊÇ intÀàÐÍ³£Á¿µÄ³£ÒýÓÃ
	cout << endl;
	const char* constchar = "";
	char* charponiter = const_cast<char*>(constchar);


	/*                *******                     ×Ö·û´®ºÍÏòÁ¿ÒÔ¼°Êý×é                    *******                   */

	/*
	Titile:3.2.2½ÚÁ·Ï°Ìâ
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
	Titile:3.3.3½ÚÁ·Ï°Ìâ
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
 
