#include <iostream>
#include <string>
using namespace std;

string takeword()
{
    string x;
    cout << "please enter your word (3 Uppercase letters): " << endl;
    cin >> x; 
    return x;
}

void printuntilword(string z)
{
    int count = 0;
    
    for (int a = 65; a <= 90; a++)
    {
        for (int b = 65; b <= 90; b++)
        {
            for (int c = 65; c <= 90; c++) // تعديل c <= 90
            {
                count++;
                string E = "";
                E += (char)a;
                E += (char)b;
                E += (char)c;

                cout << "Trial [" << count << "] : " << E << endl;

                if (E == z)
                {
                    cout << "\nYour word [" << z << "] was found after " << count << " trials!" << endl;
                    return; 
                }
            }
        }
    }
}

int main()
{
    printuntilword(takeword());
    return 0;
}