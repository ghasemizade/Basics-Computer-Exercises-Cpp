#include <iostream>
using namespace std;

int main() {
	int a,b,v,i;
	

	cin >> a;
	int mynum [a];
	
	
		for	(int i=0 ;i < a; i++ )
	{
		cin >> v;
		mynum [i] = v;		
	}
	
	int min = mynum[0];
	int max = mynum[0];
	
	for (int i=0; i < a; i++)
	{
		if(mynum[i] < min)
		{
			min = mynum[i];
		}
		if(mynum[i] > max)
		{
			max = mynum[i];
		}
	}
		cout<<min<<endl<<max;
	return 0;
}