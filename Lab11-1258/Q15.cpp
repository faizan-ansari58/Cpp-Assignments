#include<iostream>
using namespace std;
void swap (int *ptr1, int *ptr2){
	int temp = *ptr1;
	*ptr1=*ptr2;
	*ptr2=temp;
}
int main(){
	int array[5], array2[5];
	cout<<"Enter value of array : ";
		for(int i=0; i<5; i++){
			cin>>array[i];
		}
	cout<<"Enter value of 2nd array array : ";
		for(int i=0; i<5; i++){
			cin>>array2[i];
		}
	swap(array,array2);
		for(int i=0; i<5; i++){
			cout<<array[i];
		}
	cout<<endl;
		for(int i=0; i<5; i++){
			cout<<array2[i];
		}
	
	return 0;
}
