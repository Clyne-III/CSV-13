#include "stdafx.h"
#include "Division.h"
#include <iostream>
using namespace std;

Division::Division()
{
}


Division::~Division()
{
}

void Division::Divide(float num1, float num2)
{
	float ans;
	ans = 0;
	if (num2 > 0)
	{
		ans = num1 / num2;
		cout << "Answer is:" << ans << endl;
	}
	else if (num2 == 0)
	{
		cout << "CANNOT DIVIDE BY ZERO!!!" << endl;
	}

}
