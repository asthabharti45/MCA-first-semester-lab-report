#include <iostream>
using namespace std;

int main() {
	int a;
	int b;
	int temp;
	int *p;
	int *q;
	
	cout << "Enter two numbers : ";
	cin >> a >> b;
	
	p = &a;
	q = &b;
	
	temp = *p;
	*p = *q;
	*q = temp;
	
	cout << "After swapping : " << endl;
	cout << " a = " << a << endl;
	cout << " b = " << b << endl;
	
	return 0;
	
}
	
