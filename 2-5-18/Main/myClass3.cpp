#include "stdafx.h"
#include "myclass3.h"
#include <iostream>
using namespace std;

void myclass3::multiply(int a,int b)
{
	int answer;
	answer = 0;
	answer = (a*b);
	cout << "Answer is:" << answer << endl;
}


myclass3::myclass3()
{
}

myclass3::~myclass3()
{
}
