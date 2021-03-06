// GenericAlgorithm.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
#include "../UsedHeader/STLHeader.h"
#include "Lambda.h"
#include "BindObject.h"


void genericAlgorithm(void)
{
	// 泛型算法
	//algorithm study
	std::cout << "algorithm test start" << std::endl;
	std::vector<int> testarrary;
	for (size_t i = 0; i < 100; i++)
	{
		testarrary.push_back(i);
	}
	auto it = std::find(testarrary.begin(), testarrary.end(), 45);
	if (it != testarrary.end())
	{
		std::cout << *it << std::endl;
	}
	int a[] = { 1,2,3,4,5,6,7,8,9,10,11,12,13 };
	//查找
	auto itr = std::find(std::begin(a), std::end(a), 11);
	if (itr != std::end(a))
	{
		std::cout << *itr << std::endl;
	}
	//求和
	auto sum = std::accumulate(std::begin(a), std::end(a), (unsigned long long)0);
	std::cout << sum << std::endl;
	//翻转
	std::reverse(std::begin(a), std::end(a));
	//遍历
	std::for_each(std::begin(a), std::end(a), [](int a) {std::cout << a << std::endl; });
	//排序
	std::sort(std::begin(a), std::end(a));
	std::for_each(std::begin(a), std::end(a), [](int a) {std::cout << a << std::endl; });
	//替换
	std::replace(std::begin(a), std::end(a), 11, -1);
	std::for_each(std::begin(a), std::end(a), [](int a) {std::cout << a << std::endl; });
	//填充
	std::fill(std::begin(a), std::end(a), -1);
	std::for_each(std::begin(a), std::end(a), [](int a) {std::cout << a << std::endl; });
	//去除重复
	std::unique(std::begin(a), std::end(a));
	std::for_each(std::begin(a), std::end(a), [](int a) {std::cout << a << std::endl; });
	std::cout << "algorithm test start" << std::endl;

}

bool b = true;
int main()
{	

	
	genericAlgorithm();
	lambdaTest();
	bindObject();
	system("pause");
    return 0;
}

