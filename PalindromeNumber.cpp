// PalindromeNumber.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int takenumber()
{
	int number;
	do
	{
		cout << "please etner your number " << endl;
		cin >> number;
	} while (number <= 0);
	return number;
}
void PalindrameOrNot(int x)
{
	int count = 0;
	int z = x;
	while (x > 0)
	{
		int y = x % 10;
		x = x / 10;
		count = (count * 10) + y;
	}
	if (count == z)
		cout << "your number is palindrome number " << endl;
	else
		cout << "your number is not palindrome number " << endl;
}
int main()
{
	PalindrameOrNot(takenumber());

}
