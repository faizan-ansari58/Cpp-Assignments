#include<iostream>
using namespace std;

int main() {
	
	int row1,col1,row2,col2;
	cout<<"***Dimension of 1st Arrray***\n "<<endl;
	
	cout<<"Enter the numbers of row :";
	cin>>row1;
	cout<<"Enter the numbers of colomn :";
	cin>>col1;
	
	cout<<"***Dimension of 2nd Array***\n "<<endl;
	
	cout<<"Enter the numbers of row :";
	cin>>row2;
	cout<<"Enter the numbers of colomn :";
	cin>>col2;
	
	int array1[row1][col1],array2[row2][col2];
	cout<<"\n*** 1st Arrray***\n "<<endl;
	for(int i=0;i<row1;i++){
		for(int j=0;j<col1;j++){
			cout<<i<<"*"<<j<<" enter value :";
			cin>>array1[i][j];
		}
	}
	cout<<"\n*** 2nd Arrray***\n "<<endl;
	for(int i=0;i<row2;i++){
		for(int j=0;j<col2;j++){
			cout<<i<<"*"<<j<<" enter value :";
			cin>>array2[i][j];
		}
	}
	
	if ((row1==row2)&&(col1==col2)){
	
	int sum[row1][col1],mul[row1][col2];
	
	//sum
	for(int i=0;i<row1;i++){
		for(int j=0;j<col1;j++){
			sum[i][j]=array1[i][j]+array2[i][j];
		}
	}
	//mul
	if(col1==row2){
	int m=row2=col1;
	
		for(int i=0;i<row1;i++){
			for(int j=0;j<col2;j++){
				mul[i][j]=0;
				for(int k=0;k<m;k++)
					mul[i][j]=mul[i][j]+array1[i][k]*array2[k][j];
			}
		}
		//print  
		cout<<"\n**********Multiplication***********\n"<<endl;
		
		for(int i=0;i<row1;i++){
			for(int j=0;j<col2;j++){
				cout<<mul[i][j]<<"\t";
			}
			cout<<endl;
		}
		
	}
	//print sum
	cout<<"\n**********Sum***********\n"<<endl;
	
	for(int i=0;i<row1;i++){
		for(int j=0;j<col1;j++){
			cout<<sum[i][j]<<"\t";
		}
		cout<<endl;
	}
}

	return 0;
}
