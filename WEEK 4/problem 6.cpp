#include <iostream>
using namespace std;

int main () {
	
	char ch;
	cout << "Enter the Character : "<< endl;
	cin >> ch;
	
	int ascii = ch ;
	cout << ascii << endl;
	int type;
	
	
	if (ascii >= 65 && ascii <= 90) {
		type = 1;
		
	}
	else if (ascii >= 97 && ascii <= 122) {
		type = 2;
		
	}
	else if (ascii >= 48 && ascii <= 57) {
		type = 3;
		
	}
	else {
		type = 4;
	}
	
	switch (type) {
		case 1:
		cout << "Capital Latter (A-Z)";
		break;
		
		case 2:
		cout << "Small Latter (a-z)";
		break;
		
		case 3:
		cout << "Digit";
		break;
		
		case 4:
		cout << "Special symbol";
		break;
	}

	return 0;
}
