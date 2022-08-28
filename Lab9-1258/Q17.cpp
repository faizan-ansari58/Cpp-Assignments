#include<iostream>
using namespace std;
int main()
{
	int matrix[5][5];
	for(int row=0;row<5;row++)
	{
		for(int col=0;col<5;col++)
		{
			cout<<"Ener values for matrix"<<endl;
			cout<<row<<","<<col<<",\t";
			cin>>matrix[row][col];
		}
	}
	cout<<"The values entered for matrix are displayed as"<<endl;
	for(int row=0;row<5;row++)
	{
		for(int col=0;col<5;col++)
		{
			cout<<"\t"<<matrix[row][col];
		}
		cout<<endl;
	}
}
