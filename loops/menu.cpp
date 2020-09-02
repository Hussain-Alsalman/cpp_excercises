#include <iostream>

using namespace std;

int main () {
	int usr_input ; 
	do {
		cout << "Please select one of the following options to end the program: " << endl; 
		cout << "1 : kill this app " << endl << "2 : close it" << endl << "3 : yank this thing" << endl; 
		cin >> usr_input;
		if(cin.fail()) { cout << "This is not even an integer" << endl; 
			cin.clear();
		cin.ignore();}

	}while(usr_input != 1 &&  usr_input !=2 &&  usr_input != 3);
}

