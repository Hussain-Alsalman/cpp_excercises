#include <iostream>
#include <string>

using namespace std; 

int main () {
	int first_num, second_num;
       string first_name, second_name; 
cout << "Enter your name please: "; 
cin >>  first_name ;  
cout << "Enter your age please : "; 
cin >>  first_num; 
cout << "Enter your name please: "; 
cin >> second_name;
cout << "Enter your age please: "; 
cin >>  second_num;

if (first_num > second_num) {
	cout << "It seems that " << first_name << " is older than " << second_name << endl; 
} else {
	cout << "it seems that " << second_name << " is older than " << first_name << endl; 
}
}
