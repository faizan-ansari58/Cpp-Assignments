//  Question No: 21
// Ask the user to enter a float array of ten elements and sort this array in ascending and descending order
#include<iostream>
using namespace std;
int main(){
	int size=10;
	float array[size];
	cout<<"please enter 10 numbers: ";
	for(int start=0;start<size;start++){
		cin>>array[start];
	}
	cout<<endl;
	//entered numbers
	cout<<"entered number "<<endl;
	for(int start=0;start<size;start++){
		cout<<array[start]<<"  ";
	}
	cout<<endl<<endl;
	//descending
	cout<<" sorting in descending"<<endl;
	for(int start=0;start<size-1;start++){
		for(int start=0;start<size-1;start++){
			if(array[start]<array[start+1]){
				float temparray=array[start];
				array[start]=array[start+1];
				array[start+1]=temparray;
			}
		}
	}
	for(int start=0;start<size;start++){
		cout<<array[start]<<"  ";
	}
	cout<<endl<<endl;
	//ascending
	cout<<" sorting in ascending"<<endl;
	for(int start=0;start<size-1;start++){
		for(int start=0;start<size-1;start++){
			if(array[start]>array[start+1]){
				float temparray=array[start];
				array[start]=array[start+1];
				array[start+1]=temparray;
			}
		}
	}
	for(int start=0;start<size;start++){
		cout<<array[start]<<"   ";
	}
	return 0;
}
