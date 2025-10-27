#include <iostream>
#include <string>
#include "utilities.h"
int main(){
	
	bool runProgram = true;
	
	std::string sqlInstruction = "";
		
	std::cout << "welcome to the program!\n";
	while(runProgram){
		//		clearScreen();

		std::cout << "Enter a string: ";


		std::getline(std::cin, sqlInstruction);
		std::cout << sqlInstruction << std::endl;	
	}

	return 0;
}
