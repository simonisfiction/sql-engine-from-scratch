
struct data{
	int id;
	std::string name;
};

void HandleInsert(std::vector<data> vectorDatabase){
	
	data tempData;
	std::string tempName = "";

	std::cout << "Enter the name you would like to find\n";
	
	std::cin >> tempName;
	tempData.name = tempName;
	tempData.id = vectorDatabase.size();
	vectorDatabase.push_back(tempData);
	std::cout << "ID:   " << vectorDatabase[0].id << std::endl;
	std::cout << "Name: " << vectorDatabase[0].name << std::endl;
	std::cout << "User stored successfully\n";
	
}

void HandleSelect(std::vector<data> vectorDatabase){
	std::cout << "This is the select function which hasn't been implemented!\n";
}

void printHelp(){
	std::cout << "commands:\ninsert: insert a new user\nselect: select a user\nexit: exit program\n";
}




void clearScreen(){
	#ifdef _WIN32
		system("cls");
	#else 
		system("clear");
	#endif
}
