#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main(){
	ofstream file("new.txt");
	if(!file){
		cout<<"Error ";
		
	}
	file<<"I am Muhammad Faizan "<<endl;
	file<<"This is my PC "<<endl;
	file<<"This is programming class "<<endl;
	file<<"Compiler is Dev "<<endl;
	file<<"Software is microsoft teams "<<endl;
	
	ifstream file1("new.txt");
	if(!file1){
		cout<<"Error ";
	}
	string a;
	while(file1>>a){
		cout<<a<<" ";
	}
	
}
