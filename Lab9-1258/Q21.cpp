//Question No 21.
#include <iostream>
using namespace std;

int main()
{
	int a[5][5];
	cout<<"Input first matrix: "<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	
	
	cout<<"Diagonal matrix: "<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i==j){
				cout<<a[i][j]<<'\t';
			}
			else{
				cout<<0<<"\t";
			}
		}
		cout<<endl;
	}
	
	return 0;	
}
