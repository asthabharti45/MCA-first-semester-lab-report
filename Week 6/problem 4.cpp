#include <iostream>
using namespace std;

int main()
{
    int n;
    int *p;

    cout << "Enter a number: ";
    cin >> n;

    p = &n;

    cout << "Original value = " << *p << endl;

    (*p)++;
    cout << "After increment = " << *p << endl;

    (*p)--;
    cout << "After decrement = " << *p << endl;

    return 0;
}
