#include <iostream>
using namespace std;
//Hosein ghasemizade
//40015441054013

int main()
{
	int num,lastchar,a;
	int x;
	int usernumber;
	cin>>num;
	usernumber = num;
	
	
	for (int i = 0; num>0; i++)
	{	
		lastchar = num%10;
		num = num/10;
		for (int j = 0; j < lastchar; j++)
		{
			cout<<lastchar;
		}
		cout<<"\n";
		
	}

			
	return 0;
}