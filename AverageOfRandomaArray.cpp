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

float avarageallelements(int myarr[100], int num)
{
	float sum = 0;
	float average;
	for (int b = 0; b < num; b++)
	{
		sum += myarr[b];

	}
	average = sum / num;
	return average;
	cout << endl;
}


void printminimumnumber(float y)
{

	cout << "the sum of all elements =  " << y << endl;

}
int main()
{
	srand((unsigned)time(NULL));
	int number = takenumberelements();
	int ub[100];
	printrandomarray(ub, number);
	printminimumnumber(avarageallelements(ub, number));


}

