#include "Check.h"

Check::Check()
{
	exp = NULL;
	size_ = 0;
}

Check::Check( const char* exp_)
{
	size_ = strlen(exp_);
	exp = new char[size_ + 1];
	strcpy(exp, exp_);
}

//Check::~Check()
//{
//	//exp = '\0';
//	delete[]exp;
//	exp = NULL;
//}

bool Check::Test()
{
	stack<char> st1;
	bool isExpCorr = true;
	while (*exp) {
		if (*exp == '(') {
			st1.push(*exp);
		}
		if (*exp == ')') {
			if (st1.empty()) {
				isExpCorr = false;
				break;
			}
			else {
				st1.pop();
			}

		}
		exp++;
	}

	return isExpCorr;
}
