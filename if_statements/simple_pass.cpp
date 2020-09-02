#include <iostream> 

using namespace std; 

int main () { 
	int password; 
	int confirm; 
	cout << "Enter new password: "; 
	cin >> password; 
	cout << "Please confirm password: "; 
	cin >> confirm; 
if (password == confirm) {
	cout << "Thanks\nYour new password has been set"<< endl; 
}else { cout << "Sorry, but your entry does not match password"<< endl; 
}
}
