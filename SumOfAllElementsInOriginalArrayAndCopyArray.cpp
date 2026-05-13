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
}int randomnumber(int from, int to)
{
	int x = rand() % (to - from + 1) + from;
	return x;
}void randomarray(int arr1[100], int& num)
{

	
	cout << endl;
	cout << "array 1 is " << endl;
	for (int a = 0; a < num; a++)
	{
		arr1[a] = randomnumber(1, 100);
		cout << arr1[a] << " ";
	}
	cout << endl << endl;
}
void arraynumber2( int arr2[100], int num)
{
	cout << "array 2 is " << endl;
	
	
	for (int b = 0; b < num; b++)
	{
		arr2[b] = randomnumber(1, 100);
		cout << arr2[b] << " ";
	}
	cout << endl << endl;
}

	

int SumofAllelementsintwoarray(int arr1[100] , int arr2[100] ,int num)
{

	int x = 0;

	for (int g = 0; g < num; g++)
	{
		x += (arr1[g] + arr2[g]);
	}
	return x; 
}
void Printanarrayequaltothesumoftwoarrays(int arr1[100], int arr2[100], int arr3[100], int num)
{
	for (int t = 0; t < num; t++)
	{
		arr3[t] = arr1[t] + arr2[t];
	}
}
void printarray3(int arr3[100] , int num)
{
	cout << "array equal to the sum of two arrays " << endl;
	for (int j = 0; j < num; j++)
	{
		cout << arr3[j] << " ";
	}
	cout << endl << endl;;
}
void printsum(int r)
{
	cout << "the sum of all elements in the two arrays is " << r << endl;
}
int main()
{
	srand((unsigned)time(NULL));
	int f[100];
	int e[100];
	int w[100];
	int element = takenumberelements();
	randomarray(f, element);
	arraynumber2(e, element);
	
	Printanarrayequaltothesumoftwoarrays(f, e, w, element);
	printarray3(w, element);
	printsum(SumofAllelementsintwoarray(f, e, element));

	return 0;
}