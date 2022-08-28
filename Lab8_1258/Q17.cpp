//  Question No: 17
//  Declare and initialize an integer array of minimum size ten with some values. Ask user to enter key value and count how
//  many times this key value exists in the array, if it exists. Otherwise display value not exists..

#include<iostream>
using namespace std;
int main(){
	int array[10]={1,2,3,4,5,5,4,4,4,3};
	int i,n,count=0;
	cout<<"enter the value you want to search: ";
	cin>>n;
	for(int i=0;i<10;i++){
		if(n==array[i]){
			count=count+1;
		}
	}
	cout<<count<<" times exist in the array";
	return 0;

}
