#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int takenumberelements()
{
	int number;
	cout << "please etner number elements in the array " << endl;
	cin >> number;
	return number;
}
int randomnumber(int from, int to)
{
	int x = rand() % (to - from + 1) + from;
	return x;
}
void randomarray(int arr1[100], int& num)
{

	int x, y;
	cout << "please enter array range " << endl;
	cin >> x;
	cin >> y;
	cout << "array 1 is " << endl;
	for (int a = 0; a < num; a++)
	{
		arr1[a] = randomnumber(x, y);
		cout << arr1[a] << " ";
	}
	cout << endl << endl;
}
void copyarray(int arr1[100], int arr2[100], int num)
{
	for (int b = 0; b < num; b++)
	{
		arr2[b] = arr1[b];
	}
}
void printcopyarray(int arr2[100], int num)
{
	cout << "array after copy is " << endl;
	for (int c = 0; c < num; c++)
	{
		cout << arr2[c] << " ";
	}
	cout << endl << endl;;
}

void primenumberinarray(int arr2[100], int num)
{
	cout << "prime numbers in array 2 is " << endl;

	for (int u = 0; u < num; u++)
	{

		int count = 0;
		for (int y = 1; y <= arr2[u]; y++)
		{
			if (arr2[u] % y == 0)
			{
				count++;
			}

		}
		if (count == 2)
		{
			cout << arr2[u] << " ";
		}

	}

}
int main()
{
	srand((unsigned)time(NULL));
	int f[100];
	int e[100];
	int element = takenumberelements();
	randomarray(f, element);
	copyarray(f, e, element);
	printcopyarray(e, element);
	primenumberinarray(e, element);


	return 0;
}