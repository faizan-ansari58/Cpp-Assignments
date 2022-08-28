#include<iostream>
using namespace std;
int main(){
	char *ptr1,*ptr2,*ptr3;
	ptr1= new char;
	ptr2= new char;
	ptr3= new char;
	*ptr1= 'A';
	*ptr2= 'B';
	*ptr3= 'C';
	cout<<"Value of first ptr is : "<<*ptr1<<endl;
	cout<<"Value of second ptr is : "<<*ptr2<<endl;
	cout<<"Value of third ptr is : "<<*ptr3;
	
	return 0;
}
