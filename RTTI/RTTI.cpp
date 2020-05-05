// RTTI.cpp 
//

#include <iostream>
#include "DynamicCast.h"
#include "typeid.h"
int main()
{
	//dynamic_cast test
	childToParentCast();
	parentToChild();
	sameTypeCast();
	//typeid test
	dynamicType();
}