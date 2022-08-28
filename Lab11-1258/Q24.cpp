#include<iostream>
using namespace std;
int main (){
	
	char *Cptr1,*Cptr2;
	char arr[20];
	
	Cptr1=arr;
	cout<<"Enter the array: ";
	gets(Cptr1);
	
	for(int i=0;i<5;i++){
		Cptr2=Cptr1;
		cout<<*Cptr2;
		Cptr1++;
		Cptr2++;
	}
	
	return 0;
}

