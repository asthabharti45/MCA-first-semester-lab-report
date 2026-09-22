#include <iostream>

using namespace std;
int main() {
	int num;
	cout << "Enter a integer:";
	cin >> num;
	
	// ternery operator to chack if the number is even or odd
	
	if (num%2==0){
		cout <<"number is Even.";
	} else {
		cout <<"number is odd.";
	}
	              
	return 0;
	
}
