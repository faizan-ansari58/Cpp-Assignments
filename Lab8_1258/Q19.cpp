//  Question No: 19
// Ask 10 users to enter first character of their name count how many names start with C
#include<iostream>
using namespace std;
int main(){
	char array[10];
	int n,found=0;
	cout<<"enter first alphabet of your name: ";
	for(int i=0;i<10;i++){
		cin>>array[i];
}
	for(int i=0;i<10;i++){
		cout<<array[i]<<"  ";
		if(array[i]=='C'){
		found=found+1;	
		}
	}
	cout<<endl;
		cout<<found<<" no of names start with C  "<<endl;
		return 0;
}
