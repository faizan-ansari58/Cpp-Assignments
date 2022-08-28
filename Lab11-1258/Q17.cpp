#include<iostream>
using namespace std;
int main(){
	int *ptr1,*ptr2,*ptr3;
	ptr1= new int;
	ptr2= new int;
	ptr3= new int;
	*ptr1= 10;
	*ptr2= 10;
	*ptr3= 10;
	cout<<"Sum is : "<<*ptr1+*ptr2+*ptr3;
	return 0;
}
