#include <cstdlib>
#include <ctime>
#include "stdio.h"

int randRange( int low, int high); 
int randFast(int low, int high); 
int main() {
	//call just once, at the very start
	srand(time(NULL));
	printf("This is a randomly generated number : %d\n", randFast(15,1000));
}

int randFast(int low, int high) {
	return rand() % (high-low) + low;
}
