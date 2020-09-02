# include <iostream>

using namespace std; 

void changeArgument (int x) {
	x = x+5; 
}

int divide (int numerator, int denominator) {
if (0 == denominator ) {
	int result = 0; 
	return result; 
}
int result = numerator / denominator; 
return result; 
}

int main () {

	int y = 4; 
	int numerator; 
	int denominator; 
	changeArgument(y); // y will be unharmed by the function call 
	cout << "This is the value of y : " << y ; 
	cout << "Please enter the numerator" << endl; 
	cin >> numerator; 
	cout << "Please enter the denominator" << endl; 
	cin >> denominator; 
	cout << divide(numerator, denominator); 
}
