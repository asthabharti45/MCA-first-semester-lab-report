//PROBLEM 8

#include <iostream>
using namespace std;

int main()
{
    int a[10], b[10], c[20];
    int n1, n2;
    int i = 0, j = 0, k = 0;

    cout << "Enter size of first array : ";
    cin >> n1;

    cout << "Enter first sorted array : ";

    for(int x = 0; x < n1; x++)
    {
        cin >> a[x];
    }

    cout << "Enter size of second array: ";
    cin >> n2;

    cout << "Enter second sorted array:\n";

    for(int x = 0; x < n2; x++)
    {
        cin >> b[x];
    }

    while(i < n1 && j < n2)
    {
        if(a[i] < b[j])
        {
            c[k] = a[i];
            i++;
        }
        else
        {
            c[k] = b[j];
            j++;
        }

        k++;
    }

    while(i < n1)
    {
        c[k] = a[i];
        i++;
        k++;
    }

    while(j < n2)
    {
        c[k] = b[j];
        j++;
        k++;
    }

    cout << "Merged array : ";

    for(int x = 0; x < k; x++)
    {
        cout << c[x] << " ";
    }

    return 0;
}
