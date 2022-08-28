//  Question No: 23
// Declare and initialize an integer array with some values. Ask user to enter two key values and search these values from array.
#include<iostream>
using namespace std;
int main(){
	int record[5]={03,56,78,23,12};
	int number1,number2;
	int found1=0;
	int found2=0;
	cout<<"please enter first number to search: ";
	cin>>number1;
	cout<<"enter second number: ";
	cin>>number2;
	for(int start=0;start<5;start++){
		if(number1==record[start]){
			found1=found1+1;
		}
		if(number2==record[start]){
			found2=found2+1;
		}
	}
	if(found1==0&&found2==0){
		found2=found2+1;
	}
if(found1==0&&found2==0){
	cout<<endl<<"value not exists"<<endl;
}
else{
	cout<<endl<<number1<<"exists"<<found1<<"times in the record"<<endl;
	cout<<endl<<number2<<" exists "<<found2<<"times in the record"<<endl;
}
return 0;
}
