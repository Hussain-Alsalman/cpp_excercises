#include <iostream>

using namespace std; 

bool isPrime(int num); 
bool isDivisible(int number, int divisor); 

int main() {

	for( int i = 0; i <=100; i++) {
		if (isPrime(i)){
			cout << i << " is a prime number\n";
		}else { 
			cout << i << " is not a prime number\n";
		}
	}
}
bool isPrime(int num) {
	for (int i = 2; i < num; i ++){
		if (isDivisible(num, i)){
			return false;
		}
	}
	return true;
}

bool isDivisible(int number, int divisor) {
	return number % divisor == 0; 
}	
