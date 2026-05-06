// keys.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int randomnumber(int from, int to)
{
    int x = rand() % (to - from + 1) + from;
    return x;
}
int takenumbertype()
{
    int x;
    cout << "how many keys do you want to be displayed on the screen " << endl;
    cin >> x;
    return x;
}

void dsiplayonscreen(int y)
{
    for (int a = 1; a <= y; a++)
    {
        cout << " key " << a << " is ";
        for (int b = 1; b < 16; b++)
        {
            cout << char(randomnumber(65, 90));
            if (b == 4 || b == 8 || b == 12)
                cout << "-";
        }
        cout << endl;
    }
}




int main()
{
    srand((unsigned)time(NULL));
    dsiplayonscreen(takenumbertype());





}

