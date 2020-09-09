#include <iostream>
#include <string>

using namespace std;

struct SpaceShip {
	int x_coordinate; 
	int y_coordinate; 
	string name; 
	};


int main(){

	SpaceShip my_ship; 
	my_ship.x_coordinate = 10; 
	my_ship.y_coordinate = 20; 
	my_ship.name = "Alpha"; 

	cout << "Space ship " << 
	       	my_ship.name << 
		" is located at x: " << 
	       	my_ship.x_coordinate << 
		" y: " << 
		my_ship.y_coordinate << 
		" coordinates\n";
}
