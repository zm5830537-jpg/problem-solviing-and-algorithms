// EncryprionAndDrcraption.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<string>
using namespace std;
string takepassword()
{
	string password;
	cout << "please enter your password " << endl;
	getline(cin, password);
	return password;
}
string encryptionpass(string x)
{
	for (int a = 0; a < x.length(); a++)
	{
		x[a] = char(x[a] + 2);
	}
	return x;
}
string decryptionpass(string y)
{
	for (int a = 0; a < y.length(); a++)
	{
		y[a] = char(y[a] - 2);
	}
	return y;
}
int main()
{
	string password = takepassword();
	string Encryption = encryptionpass(password);
	string Decryption = decryptionpass(Encryption);
	cout << "your password after encryption is " << Encryption << endl << endl;

	cout << "your password after decryption is " << Decryption << endl;
}

