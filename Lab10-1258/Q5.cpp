#include<iostream>
using namespace std;

int main() {
	int row,col;
	row=col=3;
	
	int array1[row][col],array2[row][col],array3[row][col];
	
	cout<<"***First array**\n"<<endl;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter the value :";
			cin>>array1[i][j];
		}
	}

	cout<<"***\nSecond array**\n"<<endl;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<"Enter the value :";
			cin>>array2[i][j];
		}
	}
	//multiplication
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			array3[i][j]=0;
			for(int k=0;k<3;k++)
			array3[i][j]=array3[i][j]+array1[k][j]*array2[i][k];
		}
	}
	
	cout<<endl;
	
	for(int i=0;i<row;i++){
		for(int j=0;j<col;j++){
			cout<<array3[i][j]<<"\t";
		}
		cout<<endl;
	}
	
	
	return 0;
}
