


#include <iostream>
using namespace std;
int TakeElementsNumberInTheArray()
{
	int number;
	cout << "please enter the elements number in the array " << endl;
	cin >> number;
	return number;
}
void printnumberarrayelements(int arr[100], int& x)
{
	for (int a = 0; a < x; a++)
	{
		arr[a] = rand()% (50 - 10 + 1) + 10;
		cout << "element "<<a+1<< " is " << arr[a] << endl;
	}
	
}
int  maxnumber(int arr[100], int x)
{
	int z = 0;
	for (int a = 1; a < x; a++)
	{
		if (z < arr[a])
		{
			z = arr[a];
		}
	}
	return z; 
}
void printmaxnumber(int number)
{
	cout << "the max number of your array is " << number << endl;
}
int main()
{
	int num = TakeElementsNumberInTheArray();
	int p[100];
	printnumberarrayelements(p, num);
	printmaxnumber(maxnumber(p, num));
}

