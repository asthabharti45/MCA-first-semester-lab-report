// PROBLEM 9

#include <iostream>
using namespace std;

int main()
{
	   int size;
    int a[size], num;
    int count = 0;

    cout << "Enter size of array : ";
    cin >> size;

    cout << "Enter elements : ";

    for(int i = 0; i < size; i++)
    {
        cin >> a[i];
    }

    cout << "Enter number to find: ";
    cin >> num;

    for(int i = 0; i < size; i++)
    {
        if(a[i] == num)
        {
            count++;
        }
    }

    cout << "Frequency = " << count;

    return 0;
}
