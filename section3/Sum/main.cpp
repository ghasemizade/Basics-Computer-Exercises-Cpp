#include <iostream>
using namespace std;
	int main()
	   {
	      long int x , sum ,t ;
          cout << "please enter the number :";
		  cin >> x ;
		  sum = 0 ;
		  while ( x != 0 ) {
		         t = x % 10 ;
		 sum = sum + t ;
		 x = x / 10 ;
		 }
		 cout << sum;
		 return 0;
}
