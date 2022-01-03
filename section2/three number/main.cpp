#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int x,y,z;
	cout<<"please enter the three number :";
	cin>>x>>y>>z;
	if (z == 0)
	{
		cout<<x+y;
	}
	else if (z < 0)
	{
		cout<<x-y;
	}
	else if (z > 0)
	{
		cout<<x*y;
	}
	else
	cout<<"Error";
	return 0;
}