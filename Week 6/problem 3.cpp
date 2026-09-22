#include <iostream>
using namespace std;

int main()
{
    int a;
    int *p;

    cout << "Enter a number: ";
    cin >> a;

    p = &a;

    cout << "Value = " << *p << endl;
    cout << "Address = " << p;

    return 0;
}
