#include<iostream>
using namespace std;
void input(int *ptr){
	cout<<"Enter 5 elements of array : ";
	for(int i=0; i<5; i++,ptr++){
		cin>>*ptr;
	}
}
void output(int *ptr){
	cout<<"Five elements of array are : ";
	for(int i=0; i<5; i++,ptr++){
		cout<<*ptr<<"    ";
	}
}
int main(){
	int array[5];
	input(array);
	output(array);
	return 0;
}
