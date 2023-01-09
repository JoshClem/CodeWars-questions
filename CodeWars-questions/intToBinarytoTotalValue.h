#pragma once
#include <iostream>
#include <vector>



class intToBinarytoTotalValue
{
	intToBinarytoTotalValue();

public:
	void init();
	int getUserInput();

private:
	int remainder;
	int i = 0;
	int totalValue = 0;
	void Calculations(int input);
	std::vector< int > binaryValue;
};

