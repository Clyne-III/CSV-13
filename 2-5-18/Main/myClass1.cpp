#include "stdafx.h"
#include "myClass1.h"
#include <iostream>
#include <string>
using namespace std;


myClass1::myClass1()
{

}


myClass1::~myClass1()
{
}

void myClass1::Divide(float num1, float num2)
{
	float ans;
	ans = 0;
	if (num2 > 0)
	{
		ans = num1 / num2;
		cout << "Answer is:" << ans << endl;
	}
	else if (num2 = 0)
	{
		cout << "Division by Zero" << endl;
	}

}
