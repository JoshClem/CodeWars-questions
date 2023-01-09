#include "intToBinarytoTotalValue.h"

intToBinarytoTotalValue::intToBinarytoTotalValue() {
}


void intToBinarytoTotalValue::init() {
	int userValue = getUserInput();
	//Calculations(userValue);
	std::cout << userValue << std::endl;	


}

int intToBinarytoTotalValue::getUserInput() {
	int userInput;
	std::cout << "enter integer" << std::endl;
	std::cin >> userInput;
	return userInput;

}
void intToBinarytoTotalValue::Calculations(int input) {
	
	
	//gets user input
	
	//create vector to store the binary values

	//obtains the final remainder value until quotient hits 0
	while (input != 0) {

		remainder = input % 2;
		binaryValue.push_back(remainder);
		input = input / 2;

	}

	//reverses the entire binary calculation as per required
	std::reverse(binaryValue.begin(), binaryValue.end());
	for (int i : binaryValue) {
		std::cout << i << std::endl;
	}
	for (int i : binaryValue) {
		totalValue = totalValue + i;
	}

	//obtain total value as per question
	std::cout << totalValue << std::endl;

	//checks the size of the binary value e.g. if value is 1001, size = 4, if value is 101, size = 3
	std::cout << binaryValue.size() << std::endl;


}

