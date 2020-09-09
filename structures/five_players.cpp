#include <iostream>
#include <string>

using namespace std; 

struct PlayerInfo {
	int skill_level;
	string name;
};

int main() {
	
	//like normal variable types, you can make an array out of structures. 
	PlayerInfo players[5]; 

	for(int i = 0; i < 5; i++) {
		cout << "Please enter the name of player[" << i << "]:\n";
		cin >> players[i].name; 
		cout << "Please enter the skill level for " << players[i].name << ": \n";
		cin >> players[i].skill_level;
	}
	cout << "This is what we got for now: \n"; 

	for(int i = 0; i < 5 ; i++) {
		cout << "Player Name : "<< players[i].name << ", skill: " << players[i].skill_level << "\n"; 
	}
}
