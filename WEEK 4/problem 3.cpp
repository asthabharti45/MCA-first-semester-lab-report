#include <iostream>

using namespace std;														

int main () {
	
	float a, b, c, d, e, f, g, result;

	cout << "Enter value of a : ";
	cin >> a;
	
	cout << "Enter value of b : ";
	cin >> b;
	
	cout << "Enter value of c : ";
	cin >> c;
	
	cout << "Enter value of d : ";
	cin >> d;
	
	cout << "Enter value of e : ";
	cin >> e;
	
	cout << "Enter value of f : ";
	cin >> f;
	
	cout << "Enter value of g : ";
	cin >> g;
	
	result = (a + b / c * d - e) * (f - g);
	cout << "Result = " << result ;
	
	
	return 0;
}
