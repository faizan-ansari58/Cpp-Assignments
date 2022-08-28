#include<iostream>
using namespace std;
void large (int *ptr1, int *ptr2,int *ptr3,int *ptr4,int *ptr5 ){
	int large = *ptr1;
	if(*ptr2>large)
		large=*ptr2;
	if(*ptr3>large)
		large=*ptr3;
	if(*ptr4>large)
		large=*ptr4;
	if(*ptr5>large)
		large=*ptr5;
	cout<<"Largest number is : "<<large;
}
int main(){
	int *ptr1,*ptr2,*ptr3,*ptr4,*ptr5;
	ptr1= new int;
	ptr2= new int;
	ptr3= new int;
	ptr4= new int;
	ptr5= new int;
	cout<<"Enter values of five pointers : ";
	cin>>*ptr1>>*ptr2>>*ptr3>>*ptr4>>*ptr5;
	large(ptr1,ptr2,ptr3,ptr4,ptr5);
	
	return 0;
}
