#include "stdafx.h"
#include "Multiplication.h"
#include <iostream>
using namespace std;


Multiplication::Multiplication()
{
}


Multiplication::~Multiplication()
{
}

void Multiplication::Multiply(int num1, int num2)
{
	int ans;
	ans = 0;
	ans = (num1 * num2);
	cout << "Answer is:" << ans << endl;
}
