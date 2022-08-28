//Write a template function, which takes three arguments and return the smallest. Use it in main in all possible ways
#include <iostream>
using namespace std;
template <class wxy>
void function(wxy a, wxy b,wxy c)
{
	wxy small;
	small=a;
	if(b<small)
	{
		small=b;
	}
	if(c<small)
	{
		small=c;
	}
	cout<<small;
}
int main()
{
	function <float>(2.3,3.4,4.5);
}
