#include <iostream>
#include <string>
#include <cmath>

using namespace std;
string read_tens(int num); 
string read_digit(int num, bool teen_flag); 
int cut_chunk(unsigned long long int num, int size, int chunk_num); 
string read_chunk(int num); 
int deter_mag(unsigned long long int num); 
string str_mag(int num, bool tens_flag);
string read_twos(int mag);
string wow(string read, bool single, bool print,bool after);
int main() {
	 
	unsigned long long int num; 
	int mag; 
	int chunk_num;	
	bool print_it;
	string chunk; 
	string output = "";
       	cout << "Enter a number you wish to covert to text: "; 
while(num != -1 ) {	
	cin >> num;
	mag = deter_mag(num);
	while(mag > 0){
		chunk_num = cut_chunk(num,3,mag-1);
		print_it = cut_chunk(num,3,mag-2);
		chunk = read_chunk(chunk_num);
		if (chunk != "" && chunk_num > 0) {
			if(chunk_num == 2 && num != 2) {
				output = output + wow(read_twos(mag),true,print_it,true);	
			}else if(chunk_num == 1 && mag != 1) {
				output = output + wow(str_mag(mag,true),true,print_it,true);
			}else if(chunk_num >= 3 && chunk_num <=9 ) {
				output = output + chunk + wow(str_mag(mag,false),true,print_it,true);
			}else{ 
			output = output + chunk + wow(str_mag(mag,true),true,print_it,true);
			}
		}else {
			
			output = output + chunk; 
		}
		mag--;
	}
	cout << output << endl; 
	output = ""; }
return 0;
}

string read_tens(int num){
switch(num){
	case 1: 
		return "";
	case 2: 
		return "عشرين"; 
	case 3: 
		return "ثلاثين"; 
	case 4: 
		return "اربعين"; 
	case 5: 
		return "خمسين"; 
	case 6: 
		return "ستين";
	case 7: 
		return "سبعين";
	case 8: 
		return "ثمانين";
	case 9: 
		return "تسعين";
	default: 
		return "";
	}
}
string read_digit(int num, bool teen_flag){
if (teen_flag){
 switch(num){
	 case 0: 
	 return "عشر"; 
	 case 1: 
	 return "إحدى عشر"; 
	 case 2: 
	 return "إثنا عشر"; 
	 case 3: 
	 return "ثلاثة عشر"; 
	 case 4: 
	 return "أربعة عشر"; 
	 case 5: 
	 return "خمسة عشر"; 
	 case 6: 
	 return "ستة عشر";
	 case 7: 
	 return "سبعة عشر";
	 case 8: 
	 return "ثمانية عشر";
	 case 9: 
	 return "تسعة عشر";
	 default: 
	 return "";
	 }
 }else {
	switch(num){
		 case 1: 
		 return "واحد"; 
		 case 2: 
		 return "اثنان"; 
		 case 3: 
		 return "ثلاث"; 
		 case 4: 
		 return "اربع"; 
		 case 5: 
		 return "خمس"; 
		 case 6: 
		 return "ست";
		 case 7: 
		 return "سبع";
		 case 8: 
		 return "ثمان";
		 case 9: 
		 return "تسع";
		 default: 
		 return "";
	 }
 }
}

int cut_chunk(unsigned long long int num, int size, int chunk_num){
	if(chunk_num < 0) {
	return 0;
	}	
	int result;
	int denom = pow(10,size*(chunk_num));
	unsigned long long int tmp_num;
	tmp_num = num/denom;
	unsigned long long int other=(tmp_num/pow(10,size)); 
	result = tmp_num -other *pow(10,size);
	return result;
}
string read_chunk(int num) {
	int first_num  = cut_chunk(num,1,0); 
	int second_num = cut_chunk(num,1,1); 
	int third_num = cut_chunk(num,1,2);	
	
	if (num <10) {
		return read_digit(first_num,false) + " ";
	}else if (num >= 10 && num < 20) {
		return read_digit(first_num,true);
	}else if (num >= 20 && num < 100) {
		return (wow(read_digit(first_num,false),true,true,true) + read_tens(second_num)) ; 
	
	}else if(second_num == 1 ) {
		if(third_num == 1) {
			return (wow("مئة",true,true,true) + read_digit(first_num,true)); 
		}else if (third_num == 2){	
			return (wow(read_twos(0),true,true,true) +  read_digit(first_num,true));
		}else {
			return(read_digit(third_num,false) + " مئة " + wow(read_digit(first_num,true),true,true,false));
		}
	}else {
		if(third_num == 1) {
			return ("مئة " + wow(read_digit(first_num,false),true,true,false) + wow(read_tens(second_num),true,true,false));	
		}else if (third_num == 2){	
			return (read_twos(0)  + wow(read_digit(first_num,false),true,true,false) +wow(read_tens(second_num),true,true,false));	
		}else {
			return(read_digit(third_num,false) + " مئة " + wow(read_digit(first_num,false),true,true,false) +wow(read_tens(second_num),true,true,false));
		}
	}	
}

int deter_mag(unsigned long long int num){
unsigned long long int cond = -1; 
int mag = 0; 

for(int i = 0 ; cond != 0; i++) {
	cond = num/pow(10,i*3); 	
	mag = i; 
}
return mag; 
}
string read_twos(int mag) {
switch(mag){
		 case 2: 
		 return "ألفين"; 
		 case 3: 
		 return "مليونين"; 
		 case 4: 
		 return "مليارين"; 
		 case 5: 
		 return "بليارين"; 
		 case 6: 
		 return "كوادرليونين"; 
		 case 7: 
		 return "كوينتليونين";
		 case 8: 
		 return "سكسليونين";
		 case 9: 
		 return "سبتليونين";
		 default: 
		 return "مئتين";	

	}


}
string str_mag(int num,bool tens_flag = false ) {
if (tens_flag) {
switch(num){
		 case 1: 
		 return ""; 
		 case 2: 
		 return "ألف"; 
		 case 3: 
		 return "مليون"; 
		 case 4: 
		 return "مليار"; 
		 case 5: 
		 return "بليار"; 
		 case 6: 
		 return "كوادرليون";
		 case 7: 
		 return "كوينتليون";
		 case 8: 
		 return "سكسليون";
		 case 9: 
		 return "سبتيلليون";
		 default: 
		 return "";	

	}
}else {
switch(num){
		 case 1: 
		 return ""; 
		 case 2: 
		 return "آلاف"; 
		 case 3: 
		 return "ملايين"; 
		 case 4: 
		 return "مليارات"; 
		 case 5: 
		 return "بليارات"; 
		 case 6: 
		 return "كوادرليونات";
		 case 7: 
		 return "كوينتليونات";
		 case 8: 
		 return "سكسليونات";
		 case 9: 
		 return "سبتلليونات";
		 default: 
		 return "";	

	}
}
}
string wow(string read, bool single=false, bool print=true,bool after=true) {
	if (read != "" && print != false) {
		if(single) {
			if(after) {
			return read + " و " ;}
			else {
				return " و " + read + " ";}
		}else {	
			return " و " + read + " و "; 
		}
	}else {
		return read;
	}
}
