// minofrandomarray.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

#include <cstdlib>

#include <ctime>
using namespace std;
int takenumberelements()
{
	int number;
	cout << "please enter elements number in the array " << endl;
	cin >> number;
	return number;

}
int randombetweentwonumber(int from, int to)
{
	int random = rand() % (to - from + 1) + from;
	return random;
}
void printrandomarray(int myarr[100], int& num)
{
	int c, b;
	cout << "please enter the smallest number you want to be in the array " << endl;
	cin >> c;

	cout << "please enter the biggest number you want to be in the array " << endl;
	cin >> b;
	for (int a = 0; a < num; a++)
	{
		myarr[a] = randombetweentwonumber(c, b);

		cout << " alement " << a + 1 << " of the array is  " << myarr[a] << endl;
	}
}

int sumallelements(int myarr[100], int num)
{
	int sum= 0;
	for (int b = 0; b < num; b++)
	{
		sum += myarr[b];;

	}
	return sum;
	cout << endl;
}


void printminimumnumber(int y)
{

	cout << "the sum of all elements =  " << y << endl;

}
int main()
{
	int number = takenumberelements();
	int ub[100];
	printrandomarray(ub, number);
	printminimumnumber(sumallelements(ub, number));


}

