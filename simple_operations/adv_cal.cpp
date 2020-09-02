#include <iostream>

using namespace std; 

int main () {
	double oprand1, oprand2; 
	char operation; 

	cout << "Please enter the first operand:\n"; 
	cin >> oprand1; 
	cout << "Please enter the second operand:\n"; 
	cin >> oprand2;
	cout << "Please enter the operation type ex.( -,+,* or /)\n"; 
	cin >> operation;

	if ( operation == '+') {
	cout << "The addition result is :"<<  oprand1 + oprand2 << endl;
	}else if( operation == '-') {
	cout << "The subtraction result is :"<<  oprand1 - oprand2 << endl;
	}else if( operation == '*') {
	cout << "The multiplicatoin result is :"<<  oprand1 * oprand2 << endl;
	}else{
	cout << "The divisoin result is :"<<  oprand1 / oprand2 << endl;
	}   	
}
