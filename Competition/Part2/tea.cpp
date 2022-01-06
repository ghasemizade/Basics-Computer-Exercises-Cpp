#include <iostream>
using namespace std;

int main() {
	int n,m,x;
	float t1,t2;
	cin>>n>>m;
	cin>>t1>>t2;
	x = t2*1000;
	
	if (n*t1 <= m*x)
	{
		cout<<"Yes";
	}
	else
	{
		cout<<"No";
	}
	return 0;
}