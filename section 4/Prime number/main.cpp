#include <iostream> 
using namespace std;
 
int main(){
 int x , y;
 	cin >>x;
 	y = 0;
 	for(int i = 2; i < x ; i++){
   	if( x % i == 0 ){
   	y = 1;
  	 } 
	 }
 if(y == 0){
   cout <<"yes";
 }else{
    cout <<"no";
 }
 return 0; 
}
 