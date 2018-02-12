#include "stdafx.h"
#include "myClass2.h"
#include <string>
#include <iostream>
using namespace std;


myClass2::myClass2()
{
}


myClass2::~myClass2()
{
}
void myClass2::mySubtraction1(int a, int b)
{
	int ans;
	ans = 0;
	if (b <= a)
	{
		ans = a - b;
		cout << "Subtraction of two numbers is:" << ans << endl;
	}
	else
	{
		cout << " ...Result is negative" << endl;

	}
}