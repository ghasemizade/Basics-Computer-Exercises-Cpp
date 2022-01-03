#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	float a,b,c,d;
	float sum,product,average;
	cout<<"please enter the 4 number :";
	cin>>a>>b>>c>>d;
	sum = (a+b+c+d);
	product = (a*b*c*d);
	average = (a+b+c+d)/4;
	
	cout<<"sum:"<<sum<<"\n"<<"product:"<<product<<"\n"<<"average:"<<average;
	
	return 0;
}