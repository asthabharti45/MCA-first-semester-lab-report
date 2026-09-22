#include <iostream>
using namespace std;

int main() {
	int size;
	int *p;
	int arr[size];
	cout << "Enter the size of array : ";
	cin >> size;
	
	
	p = arr;
	
	cout << "Enter the element of array : " ;
	
	for(int i =0 ; i < size ; i++)
	{
		cin >> *p;
		p++;
	}
	
	 cout << "Array elements are:" << endl;
	 
	 for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;

}
