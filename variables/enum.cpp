#include <iostream> 

using namespace std; 

void say_hello(); 
void say_bye() ;
void express_confusion();

enum Conversation {
	HELLO,
       	BYE,
       	CONFUSED
};

int main () {

Conversation speak = HELLO; 

	switch(speak) {
		case HELLO:
		      say_hello();
		      break;
		case BYE:
		      say_bye();
		      break;
		case CONFUSED:
		      express_confusion();
		      break;
		defualt: 
		      return 0;

		}
}

void say_hello() {
	cout << "Hello" << endl; 
}
void say_bye() {
	cout << "bye!" << endl; 
}
void express_confusion() {
	cout << "I don't know what you mean ¯\\_(ツ)_/¯" << endl;
}
