	#include<iostream>
using namespace std;
void input(int *ptr){
	cout<<"Enter 10 elements of array : ";
	for(int i=0; i<10; i++,ptr++){
		cin>>*ptr;
	}
}
void output(int *ptr){
	cout<<"10 elements of array are : ";
	for(int i=0; i<10; i++,ptr++){
		cout<<*ptr<<"    ";
	}
}
int main(){
	int *array{new int[10]};
//	array[10]=new int; 
	input(array);
	output(array);
	return 0;
}
