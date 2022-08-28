//Question no 22
#include <iostream>
using namespace std;

int main()
{
	int a[5][5],b[5][5];
	cout<<"Input matrix: "<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cin>>a[i][j];
		}
	}
	
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			b[i][j]=a[j][i];
		}
	}
	
	
	
	cout<<endl<<endl<<"transpose of  matrix: "<<endl;
	for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			cout<<b[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;	
}
