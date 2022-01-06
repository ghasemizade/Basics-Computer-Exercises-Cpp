#include <iostream>
using namespace std;


int main() {
	int rt1,rt2,rt3;
	int st1,st2,st3;
	int bt1,bt2,bt3;
	int kt1,kt2,kt3;
	int rahman,siroos,bijan,keyvan;
	
	
	cin>>rt1>>rt2>>rt3;
	cin>>st1>>st2>>st3;
	cin>>bt1>>bt2>>bt3;
	cin>>kt1>>kt2>>kt3;
	
	rahman = rt1 + rt2 + rt3;
	siroos = st1 + st2 + st3;
	bijan = bt1 + bt2 + bt3;
	keyvan = kt1 + kt2 + kt3;
	if (rahman > siroos && rahman > bijan && rahman>keyvan)
	{
		cout<<"rahaman";
	}
	else if (siroos > rahman && siroos > bijan && siroos > keyvan)
	{
		cout<<"siroos";
	}
	else if (bijan > siroos && bijan > rahman && bijan > keyvan)
	{
		cout<<"bijan";
	}
	else
	{
		cout<<"keyvan";
	}
	
	return 0;
}