// PROBLEM 3

#include <iostream>
using namespace std;

int main() {
	int arr[] = {10, 20, 30, 40, 50, 60};
	
	int length = sizeof(arr) / sizeof(arr[0]);
	
	cout << "Length of array = " << length;
	
	return 0; 
}
