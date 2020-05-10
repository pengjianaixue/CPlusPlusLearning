#pragma once
#include <algorithm>
#include <string>
#include <numeric>
#include <vector>
#include <iostream>
#include <functional>
#include <map>
#ifdef DLLAPI
	#define DllSymbol __declspec(dllexport)
#else
	#define DllSymbol __declspec(dllimport)
#endif // !DLLAPI
