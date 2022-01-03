#include <iostream>
using namespace std;
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    int a,b,c;
    cout<<"please enter the three flank triangle :";
    cin >>a>>b>>c;

    if (a * a == b * b + c * c)
    {
        cout <<"Area :"<< (b * c) / 2;
    }
    else if (b * b == a * a + c * c)
    {
        cout <<"Area :"<< (a * c) / 2;
    }
    else if (c * c == b * b + a * a)
    {
        cout <<"Area :"<< (b * a) / 2;
    }
    else
    {
        cout <<"Enviroment :"<< b + c + a;
    }

    return 0;
}