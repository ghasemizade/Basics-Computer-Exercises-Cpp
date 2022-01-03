#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
int x,k,y=0,z;
cin>>x>>k;

for (int i=x; x>0; i++)
{
	z = x%10;
	y = y*10+z;
	x = x/10;
}
if(k==y){
	cout<<"Yes";
}
else {
	cout<<"No";
}
	return 0;
}