// count odd numbers in random array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int takearrayelementsnumber()
{
	int number;
	cout << "please enter array elements number" << endl;
	cin >> number;
	return number;
	
}
int randomnumbers(int from, int to)
{
	int x = rand()% (to - from + 1) + from;
	return x;
}
void fillAndPrintRandomArray(int arr1[100], int& num)
{
	cout << endl << endl;
	cout << "random array is " << endl;
	for (int a = 0; a < num; a++)
	{
		arr1[a] = randomnumbers(1, 100);
		cout << arr1[a] << " ";
	}
}
int oddnumberscount(int arr1[100], int num)
{
	int count = 0;
	for (int b = 0; b < num; b++)
	{
		if (arr1[b] % 2 != 0)
		{
			count++;
		}
	}
	cout << endl << endl;
	return count;
}
void printoddnumberscount(int x)
{
	cout << "odd number count is " << x << endl;
}
int main()
{
	int r = takearrayelementsnumber();
	int j[100];
	fillAndPrintRandomArray(j, r);
	printoddnumberscount(oddnumberscount(j, r));

 }
