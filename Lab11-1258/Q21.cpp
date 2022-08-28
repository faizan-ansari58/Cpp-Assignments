#include<iostream>
using namespace std;
int main(){
	int **ptr1, *ptr, var=10;
	ptr=&var;
	*ptr=*ptr+50;
	ptr1=&ptr;
	cout<<"Value at double pointer is : "<<**ptr1;
	return 0;
}
