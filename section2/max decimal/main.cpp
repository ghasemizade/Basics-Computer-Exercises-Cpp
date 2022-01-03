#include <iostream>

using namespace std;

int main()
{
    float List[3];
    cout<<"please enter the three number float :";

    for (int y = 0; y < 3; ++y)
    {
        cin >> List[y];
    }

    for (int y = 1; y < 3; ++y)
    {
        if (List[0] < List[y])
            List[0] = List[y];
    }
    cout <<"this max float number :"<< List[0];

    return 0;
}