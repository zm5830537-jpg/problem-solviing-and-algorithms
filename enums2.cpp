
#include <iostream>
using namespace std;
enum colours { red = 1, blue = 2 , green = 3  };
int takecolour()
{
	int hiscolour;
	cout << "what is your favourite colour ? " << endl;
	cout << "*******************************************\n";
	cout << "red : (1) " << endl;

	cout << "blue : (2) " << endl;

	cout << "green : (3) " << endl;
	cout << "**********************************************\n\n";
	cout << "choose your colour number " << endl;

	cin >> hiscolour;
	return hiscolour;
}
void changeconsolecolour(int y)
{
	colours mycolour = (colours)y;
	switch (y)
	{
	case colours::red:
		cout << system("color 4F");
		break;

	case colours::blue:
		cout << system("color 1F");
		break;

	case colours::green:
		cout << system("color 2F");
		break;

	}


}




int main()
{
	changeconsolecolour(takecolour());
}

