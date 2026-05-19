// copy array.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int takearrayelementsnumber()
{
    int number;
    cout << "please enter array elements number " << endl;
    cin >> number;
    return number;
}
int randomnumber(int from, int to)
{
    int x = rand() % (to - from + 1) + from;
    return x;
}
void array1(int arr1[100], int& number)
{
    cout << "array 1 is " << endl;
    for (int a = 0; a < number; a++)
    {
        arr1[a] = randomnumber(1, 100);
        cout << arr1[a] << " ";
    }
    cout << endl << endl;
}
void array2(int arr1[100], int arr2[100], int number)
{
    int count = 0;
    for (int b = 0; b < number; b++)
    {
        arr2[b] = arr1[b];
    }
}
void printoddnumberinrray2(int arr2[100], int number )
{
   
    
    cout << "prime numbers in copy array are " << endl;
    for (int c = 0; c < number; c++)
    {
        int count = 0;
        
        for (int d = 1; d <= arr2[c]; d++)
        {
            if (arr2[c] % d == 0)
                count++;
        }
        if (count == 2)
        {
            cout << arr2[c] << " ";
        }
     
    }
}
int main()

{
    srand((unsigned)time(NULL));
    int q[100];
    int w[100];
    int num = takearrayelementsnumber();
    array1(q, num);
    array2(q, w, num);
    printoddnumberinrray2(w, num);

}
