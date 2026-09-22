// PROBLEM 5

#include <iostream>
using namespace std;

int main () {
	int size ;
	cout << "Enter size of array : ";
	cin >> size;
	int arr[size] ;
	
	cout << "Enter array elements : ";
	for (int i = 0 ; i < size ; i ++) 
	{
		cin >> arr[i];
	}
	
	cout << "Array in reverse order : ";
	for (int i = size - 1; i >= 0; i--)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
