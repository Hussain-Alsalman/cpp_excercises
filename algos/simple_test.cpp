#include <iostream>
#include <string>
#include <cmath>

using namespace std;
string read_tens(int num); 
string read_digit(int num, bool teen_flag); 
int cut_chunk(int num, int size, int chunk_num); 
string read_chunk(int num); 
int deter_mag(int num); 
string str_mag(int num);

int main() {
	 
	int num; 
	int mag; 
	string chunk; 
	string output = ""; 
	cout << "Enter a number you wish to covert to text: "; 
	cin >> num;
	mag = deter_mag(num);
	while(mag > 0){
		chunk = read_chunk(cut_chunk(num,3,mag-1));
		if (chunk !="" ) {
		output = output + chunk + " " + str_mag(mag)+ " ";
		}else {
		output = output + chunk ; 
		}
		mag--;
	}
	cout << output << endl; 
}

string read_tens(int num){
switch(num){
	case 1: 
		return "ten";
	case 2: 
		return "twinty"; 
	case 3: 
		return "thirty"; 
	case 4: 
		return "fourty"; 
	case 5: 
		return "fifty"; 
	case 6: 
		return "sixty";
	case 7: 
		return "seventy";
	case 8: 
		return "eighty";
	case 9: 
		return "ninty";
	default: 
		return "";
	}
}
string read_digit(int num, bool teen_flag){
if (teen_flag == true){
 switch(num){
	 case 1: 
	 return "eleven"; 
	 case 2: 
	 return "twelve"; 
	 case 3: 
	 return "thirteen"; 
	 case 4: 
	 return "fourteen"; 
	 case 5: 
	 return "fifteen"; 
	 case 6: 
	 return "sixteen";
	 case 7: 
	 return "seventeen";
	 case 8: 
	 return "eighteen";
	 case 9: 
	 return "nineteen";
	 default: 
	 return "";
	 }
 }else {
	switch(num){
		 case 1: 
		 return "one"; 
		 case 2: 
		 return "two"; 
		 case 3: 
		 return "three"; 
		 case 4: 
		 return "four"; 
		 case 5: 
		 return "five"; 
		 case 6: 
		 return "six";
		 case 7: 
		 return "seven";
		 case 8: 
		 return "eight";
		 case 9: 
		 return "nine";
		 default: 
		 return "";
	 }
 }
}

int cut_chunk(int num, int size, int chunk_num){
	
	int result;
	int denom = pow(10,size*(chunk_num));
	int tmp_num;
	tmp_num = num/denom;
	int other=(tmp_num/pow(10,size)); 
	result = tmp_num -other *pow(10,size);
	return result;
}
string read_chunk(int num) {
	int first_num  = cut_chunk(num,1,0); 
	int second_num = cut_chunk(num,1,1); 
	int third_num = cut_chunk(num,1,2);

	if (num == 0) {
		return "";
	}else if (num < 10 ) {
		return read_digit(first_num, false);
	}
	else if (num > 10 && num < 20){
		return read_digit(first_num, true);
	}else if (num == 10 || num > 20 && num < 99) {
	 	return (read_tens(second_num)+ " " + read_digit(first_num,false)); 
	}else if (second_num != 1) {
	       return (read_digit(third_num, false) + " hundereds " + read_tens(second_num)+ " " + read_digit(first_num , false));
        }else {
       	      return (read_digit(third_num, false) + " hundereds " + read_digit(first_num , false));
	
}
}
int deter_mag(int num){
int cond = -1; 
int mag = 0; 

for(int i = 0 ; cond != 0; i++) {
	cond = num/pow(10,i*3); 	
	mag = i; 
}
return mag; 
}

string str_mag(int num) {

switch(num){
		 case 1: 
		 return ""; 
		 case 2: 
		 return "thousands"; 
		 case 3: 
		 return "millions"; 
		 case 4: 
		 return "billions"; 
		 case 5: 
		 return "trillion"; 
		 case 6: 
		 return "quadrillion";
		 case 7: 
		 return "quantrillion";
		 case 8: 
		 return "sextillion";
		 case 9: 
		 return "septillion";
		 default: 
		 return "";	

	}
}
