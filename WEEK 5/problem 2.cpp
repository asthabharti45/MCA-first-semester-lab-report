//PROBLEM 2

#include <iostream>
using namespace std;

int main () {
	int size ;
	cout << "Enter size of array : ";
	cin >> size;
	int arr[size], sum ;
	
	cout << "Enter array elements : ";
	for (int i = 0 ; i < size ; i ++) 
	{
		cin >> arr[i];
		sum = sum + arr[i];
	}
	
	cout << "Sum of array elements = " << sum ;
	
	return 0;
	
	
}
