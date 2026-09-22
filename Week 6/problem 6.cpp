#include <iostream>
using namespace std;

int main() {
	string a;
	cout << "Enter first string : ";
	getline(cin,a);
	
	string b;
	cout << "Enter second string : ";
	getline(cin,b);
	
	string c;
	
	string *first = &a;
	string *second = &b;
	
	c = (*first) + " " + (*second);
	
	cout <<"concatination of two string : " <<c ;
	
	return 0;
} 
