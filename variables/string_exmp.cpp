#include <iostream>
#include <string>

using namespace std; 

int main () {
	string user_first_name; 
	string user_last_name; 

	cout << "Please enter your first name" << endl;
	cin >> user_first_name; 
	cout << "Please enter your last name" << endl;
	cin >> user_last_name; 
	string  user_full_name = user_first_name  + " " + user_last_name; 

	cout << "So your full name is " << user_full_name << endl; 
}
