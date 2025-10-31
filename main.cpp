#include <iostream>
#include <string>
#include "utilities.h"
#include <vector>

int main(){
	
	std::vector<data> vectorDatabase;	
	bool runProgram = true;
	
	std::string sqlInstruction = "";
		
	std::cout << "welcome to the program!\n";
	while(runProgram){
		//		clearScreen();

		std::cout << "db> ";

		std::getline(std::cin, sqlInstruction);
		std::cout << sqlInstruction << std::endl;	
		
		if(sqlInstruction == "insert"){
			HandleInsert(vectorDatabase);
		}
				
		
		else if(sqlInstruction == "select"){
			HandleSelect(vectorDatabase);		
		}
		else if(sqlInstruction == "exit"){
			runProgram = false;
		}
		else if(sqlInstruction == "help"){
			printHelp();
		}
		std::cin.clear();
	}

	return 0;
}
