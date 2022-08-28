#include<iostream>
using namespace std;
int main (){
	char *Cptr1,*Cptr2;
	char arr[20];
	Cptr1=arr;
	cout<<"Enter the character array: ";
	gets(Cptr1);
	Cptr2=Cptr1;
	cout<<"\nThe array is: "<<Cptr2<<endl;
	return 0;
}
