//Name: Muhammad Faizan
//Reg No: 21-NTU-CS-1258
//Lab No: 2
//Question No: 11
#include <iostream>
using namespace std;

int main()
{
    int num,reverse_num=0;
    cout<<"Enter a four digit number ";
    cin>>num;
    while(num!=0){
    reverse_num=reverse_num*10;
    reverse_num=reverse_num+num%10;
    num = num/10;}
	cout<<"The number in reverse order is "<<reverse_num;
	return 0;
    
}
//initialize the first number to zero
//multiply reverse no by 10
//add reverse num and modulus of input num
//divide the given input num by 10
//print the result
