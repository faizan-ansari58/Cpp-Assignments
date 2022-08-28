#include <fstream>
#include <iostream>
using namespace std;
int main()
{
    ifstream in("Q14.txt");
    string line[60], c;
    int g=0;
    while(in>>c)
    {
        g++;
    }
    in.close();
    ifstream fh("Q14.txt");
    while(!fh.eof())
    {
    	for(int i=0; i<g; i++)
    	{
    		fh>>line[i];
		}
	}
	cout<<"\n\n====================================CORRECT ORDER=====================================\n\n"<<endl;
	for(int i=0; i<g; i++)
	{
		cout<<line[i]<<endl;
	}
	cout<<"\n\n====================================REVERSE ORDER======================================\n\n"<<endl;
	for(int i=g; i>=0; i--)
	{
		cout<<line[i]<<endl;
	}
}
