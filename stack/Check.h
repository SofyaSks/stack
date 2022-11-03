#pragma once
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stack>
using namespace std;
class Check
{
private:
	char* exp;
	int size_;
public:
	Check();
	Check(const char* exp_);
	//~Check();
	bool Test();

};

