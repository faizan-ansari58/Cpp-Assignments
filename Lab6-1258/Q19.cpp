//Define reference variable of2-charactervariables. Input their values and display them through references
#include<iostream>
using namespace std;
int main(){
	char x,y;
	char&ref1=x;
	char&ref2=y;
	cout<<"Enter one character =";
	cin>>x;
	cout<<"Enter another character =";
	cin>>y;
	cout<<ref1<<endl;
	cout<<ref2<<endl;
	return 0;
}

