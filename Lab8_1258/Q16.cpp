//  Question No: 16
//  Declare and initialize a float array of size 20. Ask the user to enter a value and search this value from the array. Display
//  the message “Value exists” if it exists otherwise display “Value not exists”.

#include<iostream>
using namespace std;
int main(){
	int array[20]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20};
	int i,n,found=0;
		cout<<"\n enter the values you want to search: ";
		cin>>n;
		for(int i=0;i<20;i++){
			if(n==array[i]){
				found=1;
			}
		}
			if(found==1){
				cout<<"\n---VALUE EXIST---";
			}
			else
			cout<<"\n--VALUE DOES NOT EXIST--";
	return 0;
}
