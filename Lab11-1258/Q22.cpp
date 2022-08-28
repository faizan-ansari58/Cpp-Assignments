#include<iostream>
using namespace std;
int main()
{
    char str[6] = "Hello";
    char *ptr;
    int i;
    ptr = str; 
    for(i = 0; i<6; i++,ptr++)
        cout<<*ptr;
    return 0;
}
