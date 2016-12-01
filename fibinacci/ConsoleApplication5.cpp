// ConsoleApplication5.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"


int _tmain(int argc, _TCHAR* argv[])
{
	int number1 = 0;
	int number2 = 1;
	int result = 0;

	while (result < 4000000)
	{
		number2 += number1;
		number1 = number2 - number1;
		if (number2 % 2 == 0)
		{
			result += number2;
		}
	}
	std::cout << result << std::endl;

	return 0;
}

