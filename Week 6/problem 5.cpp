#include <iostream>
#include <string>
using namespace std;
int main() {
	string str;
	cout << "enter a string : ";
	getline(cin,str);
	 
	
	string *p = &str;
	cout << "string is : "<< *p;
	
	return 0;
}
