#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float x,sum,temp;
	sum=0;
	cout<<"please enter the number : ";
	cin>>x;
	
	for (float i=1; i<=x; i++){
		temp= 1/i;
		sum +=temp;
	}
	cout<<sum;
	return 0;
}