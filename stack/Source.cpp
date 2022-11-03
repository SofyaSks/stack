#include "Check.h"





int main() {

	const char* exp_s[3] = { "(1+b) + (l + 12)", "(1+b) + (l + 12))", ")1+b) + (l + 12)"};
	for (int i = 0; i < 3; i++)
	{
		Check s(exp_s[i]);
		s.Test() != 0 ? cout << exp_s[i] << " is correct \n" : cout << exp_s[i] << " is not correct\n";
	}


	return 0;
}