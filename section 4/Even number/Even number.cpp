#include <iostream>
using namespace std;


int main() 
{
	int n, c, v;

	

	cin >> n;
	int mynum [n];
	
	
	for	(int i=1 ;i <= n; i++ )
	{
		cin >> v;
		mynum [i] = v;		
	}
	for	(int i=1 ;i <= n; i++ )
	{
		if(mynum[i]%2 ==0)
		{
			cout<<mynum[i]<<endl;
		}

			
	}

	return 0;
}