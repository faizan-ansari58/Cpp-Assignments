//Question No 20
#include <iostream>
using namespace std;

int main()
{
	int a[4][4],b[4][4];
	cout<<"Input first matrix: "<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>a[i][j];
		}
	}
	
	
	cout<<"Input second matrix: "<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			cin>>b[i][j];
		}
	}
	
	
	cout<<endl<<endl<<"Output after Subtracting First from Second: \n";
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			
			cout<<b[i][j]-a[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	return 0;	
}

