#include <iostream>
#include <stdlib.h>
using namespace std;



int main()
{
	int player1 = 0;
	int player2 = 0;
	int round = 1;

	
	while (true)
	{		
		char player1;
		char Player2;
		cout <<"player 1 :";
		cin>>player1;
		cout <<"player 2 :";
		cin>>Player2;
		
		
		if (player1 == Player2)
		{
			cout<<"draw!\n";
		}
	//	player1 win
		else if (player1 == 's' && Player2 == 'g')
		{
			cout<<"win player1";
		}
		else if (player1 == 'g' && Player2 == 'k')
		{
			cout<<"win player1";
		}
		else if (player1 == 'k' && Player2 == 's')
		{
			cout<<"win player1";
		}
	//	player2 win
			else if (Player2 == 's' && player1 == 'g')
		{
			cout<<"win Player2";
		}
		else if (Player2 == 'g' && player1 == 'k')
		{
			cout<<"win Player2";
		}
		else if (Player2 == 'k' && player1 == 's')
		{
			cout<<"win Player2";
		}
		
		cout <<"continue?(y/n)\n";
		char ch;
		cin >> ch;
		
		
		if (ch == 'y')
		{
			round++;
		}
		else
		{
			exit(0);
		}
}
	return 0;
}
