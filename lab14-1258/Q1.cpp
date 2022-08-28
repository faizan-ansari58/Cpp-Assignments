#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main(){
	ifstream file("data.txt");
	if(!file){
		cout<<"Can't Open ";
	}
	char i;
	while(file>>i){
		cout<<i<<endl;
	}
	ifstream file1("data.txt");
	if(!file1){
		cout<<"Can't Open ";
	}
	string word;
	while(file1>>word){
		cout<<word<<endl;
	}
	ifstream file2("data.txt");
	if(!file1){
		cout<<"Can't Open ";
	}
	string sen;
	while(getline(file2, sen)){
		cout<<sen<<endl;
	}
	
}
