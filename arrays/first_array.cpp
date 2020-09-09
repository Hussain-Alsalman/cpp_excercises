#include "stdio.h"
#include <string>

void print_array(int ar[]);
void sort_array(int ar[], int size); 
void swap(int ar[], int first_idx, int second_idx); 
int find_lowest(int ar[], int size, int idx); 

int main() {
	int size = 10;
	int my_array[size];
	
	for (int i = 0; i < size; i++) {
	printf("Enter the value number : %d\n", i);
	scanf("%d",&my_array[i]);
	}
	sort_array(my_array, size);
	print_array(my_array);
}

void print_array(int ar[]){
	for (int i = 0; i <10; i++) {
		printf("the value number %d is :%d\n",i,ar[i]);
	}

}
int find_lowest(int ar[],int size ,int idx) {
	int low_v =ar[idx];
	int low_idx;
	for(int j = idx; j < size; j++) {
		if(low_v > ar[j]) {
		       low_v = ar[j];
	       		low_idx = j;	       
		}
	}
	return low_idx;
}

void swap(int ar[],int first_idx,int second_idx) {
	int tmp = ar[first_idx];
	ar[first_idx] = ar[second_idx];
	ar[second_idx] = tmp;
}


void sort_array(int ar[],int size){
	int low_idx;	
	for(int i = 0; i < size; i++) {
		low_idx = find_lowest(ar,size,i);
		swap(ar,i,low_idx);	
	}
}
