//Question No 19
#include <iostream>
using namespace std;

int main()
{
	int a[4][3];
	cout<<"Input Array: "<<endl;
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cin>>a[i][j];
		}
	}
	cout<<endl<<endl<<"You Entered: \n";
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			cout<<a[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	cout<<endl<<endl<<"Output after subtracting 7: \n";
	for(int i=0;i<4;i++){
		for(int j=0;j<3;j++){
			if(i==0||i==3){
				cout<<a[i][j]-7<<'\t';
			}
			else{
				cout<<a[i][j]<<'\t';
			}
			
		}
		cout<<endl;
	}
	
	return 0;	
}


