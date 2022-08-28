#include<iostream>
using namespace std;
void avg (float *ptr1, float *ptr2, float *ptr3){
	cout<<"Average is : "<<(*ptr1+*ptr2+*ptr3)/3;
}
int main(){
	float array[10];
	cout<<"Enter value of array : ";
		for(int i=0; i<10; i++){
			cin>>array[i];
		}
	avg(&array[0],&array[4],&array[9]);
	
	return 0;
}
