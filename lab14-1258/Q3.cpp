#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main(){
	ofstream file("ndata.txt");
	if(!file){
		cout<<"Can't Open ";
	}
	char array[200]="I am Muhammad Faizan. This is my PC. This is programming class. Compiler is Dev. Software is microsoft teams.";
	file<<array;
	file.close();
	ifstream open("ndata.txt");
	if(!open){
		cout<<"Error";
	}
	string word;
	while(getline(open, word)){
		cout<<word<<endl;
	}
}
