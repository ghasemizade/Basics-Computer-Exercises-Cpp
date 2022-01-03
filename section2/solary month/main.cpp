#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int month;
	cout<<"please enter the month :";
	cin>>month;
	if (0<month && month<=6){
		cout<<"31 day";
	}
	else if (6<month && month<=11){
		cout<<"30 day";
	}
	else if (month == 12){
		cout<<"29 day";
	}
	else{
		cout<<"eshtebah";
	}
	return 0;
}