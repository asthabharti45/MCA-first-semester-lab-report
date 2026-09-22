// PROBLEM 7

#include <iostream>
using namespace std;

int main()
{
   	int n;
    int a[n];
    int positive = 0;
    int negative = 0;
    int odd = 0;
    int even = 0;

    cout << "Enter number of elements : ";
    cin >> n;

    cout << "Enter elements : ";

    for(int i = 0; i < n; i++)
    {
        cin >> a[i];

        if(a[i] > 0)
        {
            positive++;
        }

        if(a[i] < 0)
        {
            negative++;
        }

        if(a[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }

    cout << "Positive = " << positive << endl;
    cout << "Negative = " << negative << endl;
    cout << "Even = " << even << endl;
    cout << "Odd = " << odd;

    return 0;
}
