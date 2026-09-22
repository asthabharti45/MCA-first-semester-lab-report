#include <iostream>
using namespace std;

int main() {
	int size;
	cout << "Enter the size of a array :";
	cin >> size;
	int arr[size];
	int *p = arr;
	
	cout << "Enter the elements : ";
	
	for(int i = 0; i < size; i++ ) 
	{
		cin >> *p;
		p++;
	}
	p = arr;
	
	cout << "Array elements are : ";
	
	for(int i = 0; i < size; i++) 
	{
		cout << *p << " ";
		p++;
	}
	return 0;
}
