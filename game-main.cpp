//gp782
//Games and such 

#include <iostream>
#include <string>
#include <climits>

using namespace std;

int main()
{
	cout << "Welcome to [NameTBD] 0.1!" << endl; 

	int run_name_menu;
	string name;
	while (run_name_menu != 1){
		cout << "Please enter your name:" << endl; 
		getline(cin, name); //enter name; input validation
		cout << "Your name is: " << name << ". Is that right? Press 1 for Yes, or 2 for No." << endl;
//		std::cin.clear();
		cin >> run_name_menu;
		std::cin.clear();
		std::cin.ignore(INT_MAX, '\n');
		//Tjhis breaks on weird input, let's fix that
	} 

	cout << "Nice to meet you, " << name << "! Let's get started!" << endl;	

//Run check against save games from prior users somewhere in here
//Ask user to confirm identity if found
//Automatically create save game if not present	

//Create a user save file based on name, using iterations
//Create a high score file covering all users

//Main switch menu to: pick between games, see user scores, see all-time scores, switch user, quit

	switch
	case 1


return 0;
}
