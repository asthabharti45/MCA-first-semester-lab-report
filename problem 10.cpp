#include <iostream>
#include <string>
using namespace std;

int main(){
	string a;
	
	cout << "enter a string : ";
	getline(cin,a);
	
	char* start = & a[0];
	char* end = & a[0] + a.length() - 1;
	for ( ;start < end; start++ ){
		char c = *start;
		*start = *end;
		*end = c;
		end--;
	}
	cout << "reverse string is : " << a;
	
	
}
