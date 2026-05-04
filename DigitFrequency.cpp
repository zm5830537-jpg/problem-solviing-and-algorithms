// DigitFrequency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int takenumber()
{
    int number;
    do
    {
        cout << "please enter positive number " << endl;
        cin >> number;
    } while (number <= 0);
    return number;
}
int numberfrequency(int x, int y)
{
    int count = 0;
    while (x > 0)
    {
        int z = x % 10;
        x = x / 10;
        if (z == y)
            count++;
    }
    return count;
}
void printallnumberfrequency(int c)
{
    for (int a = 1; a <= 9; a++)
    {
        int frequency = numberfrequency(c, a);
        if (frequency > 0)
        {
            cout << "number " << a << " was repeated " << frequency << " times " << endl;
        }
    }
}
int main()
{
    int g;
    cout << "please enter your positive number " << endl;
    cin >> g;
    printallnumberfrequency(g);

}
