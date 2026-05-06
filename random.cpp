#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
enum randomtype { number = 1, uppercaseletter = 2, smallercaseletter = 3, specialletter = 4 };
int randomnumber(int from, int to)
{
	int x = rand() % (to - from + 1) + from;
	return x;
}
int takenumbertype()
{
	int x;
	cout << "what do you want to be displayed on the screen " << endl;
	cout << "number : (1)" << endl<<endl;
	cout << "uppercaseletter : (2)" << endl << endl;
	cout << "lowercaseletter : (3)" << endl<<endl;
	cout << "specialletter : (4)" << endl<<endl;
	cout << "please your number choice " << endl<<endl;
	cin >> x;
	return x;
}

void dsiplayonscreen(int y)
{
	randomtype displayrandom = (randomtype)y;
	switch (y)
	{

		int a, b;
	case randomtype::number:
	{

		cout << "enter the first number int the range " << endl;
		cin >> a;
		cout << "enter the last number int hte range " << endl;
		cin >> b;
		cout << "your randum number is " << randomnumber(a, b) << endl;
	}
	break;
	case randomtype::uppercaseletter:

		cout << "your capital random letter is " << (char)randomnumber(65, 90);
		break;
	case randomtype::smallercaseletter:

		cout << "your small random letter is " << (char)randomnumber(97, 122);
		break;
	case randomtype::specialletter:

		cout << "your special random letter is " << (char)randomnumber(37, 47);
		break;
	}
}




int main()
{
	srand((unsigned)time(NULL));
	dsiplayonscreen(takenumbertype());





}