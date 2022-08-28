#include<iostream>
#include<cstring>
#include<fstream>
using namespace std;
int main(){
	ofstream file("writer.txt");
	if(!file){
		cout<<"Can't Open";
	}
	file<<"You will find it very good\ngood practice always to verify\nyour references\n  (Dr. Routh)";
	file.close();
	ifstream file1("asitis.txt");
	if(!file1){
		cout<<"Error";
	}
	string a;
	while(getline(file1, a)){
		cout<<a<<endl;
	}
}
