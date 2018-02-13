#include "stdafx.h"
#include "Subtraction.h"
#include <iostream>
using namespace std;


Subtraction::Subtraction()
{
}


Subtraction::~Subtraction()
{
}

void Subtraction::Subtract(int num1, int num2)
{
	int ans;
	ans = 0;
	ans = num1 - num2;
	cout << "Answer is:" << ans << endl;
	/*if (num2 <= num1)
	{
	ans = num1 - num2;
	cout << "Answer is:" << ans << endl;
	}
	else
	{
	cout << "We have a negative number." << endl;
	}*/


}
