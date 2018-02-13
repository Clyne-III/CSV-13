#include "stdafx.h"
#include "Addition.h"
#include <iostream>
using namespace std;


Addition::Addition()
{
}


Addition::~Addition()
{
}

void Addition::Add(int num1, int num2)
{
	int ans;
	ans = 0;
	ans = num1 + num2;
	cout << "Answer is:" << ans << endl;
}
