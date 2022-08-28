//  Question No: 18
//  Ask the 10 students to enter their grades in form of (A,B,C,F) and count how many students got A,B, or C grade
//  and how many students are Failed with F grade (using loop).

#include<iostream>
using namespace std;
int main(){
	char array[10]={'A','B','C','C','F','F','A','A','F','B'};
	int i,n,a=0,b=0,c=0,f=0;
	for(int i=0;i<10;i++){
		if(array[i]=='A'){
			a=a+1;
		}
		if(array[i]=='B'){
			b=b+1;
		}
		if(array[i]=='C'){
			c=c+1;
		}
		if(array[i]=='F'){
			f=f+1;
		}
	}
		cout<<a<<" students got A grade"<<endl;
		cout<<b<<" students got B grade"<<endl;
		cout<<c<<" students got C grade"<<endl;
		cout<<f<<" students got F grade"<<endl;
		return 0;
}
