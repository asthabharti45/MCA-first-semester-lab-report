#include <iostream>
using namespace std;

int main() {
	int size;
	int *p;
	int arr[size];
	int sum = 0;
	cout << "Enter the size of array : ";
	cin >> size;
	
	p = arr;
	
	cout << "Enter the element of array : " ;
	
	for(int i = 0; i < size; i++)
	{
		cin >> *p;
		p++;
	}
	
	p = arr;
	
	for(int i = 0; i < size; i++)
	{
		sum = sum + *p;
		p++;
	}
	cout << "Sum = " << sum;
	
	return 0;
}
