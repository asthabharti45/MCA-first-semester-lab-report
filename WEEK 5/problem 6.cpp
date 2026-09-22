// PROBLEM 6 *

#include<iostream>
using namespace std;

int main() {
	int size;
	
		cout << "Enter size of matrix : " ;
 	cin >> size;
	
	int a[size][size];
	int b[size][size];
	int add[size][size];
	int mul[size][size];
	
	//Enter first Matrix
	

	cout << "Enter first matrix : " ;
	for(int i = 0; i < size; i++ )
	{
		for(int j = 0; j < size; j++) 
		{
			cin >> a[i][j];
		}
	}
	
	//Enter second Matrix
	
	cout << "Enter second matrix : " ;
	for(int i = 0; i < size; i++ )
	{
		for(int j = 0; j < size; j++) 
		{
			cin >> b[i][j];
		}
	}
	
	// Addition
	
	for(int i = 0; i < size; i++ )
	{
		for(int j = 0; j < size; j++) 
		{
			add[i][j] = a[i][j] + b[i][j];
		}
	}
	
	// Multiplication
	
	for(int i = 0; i < size; i++ )
	{
		for(int j = 0; j < size; j++) 
		{
			mul[i][j] = 0;
			
			for(int k = 0; k < size; k++)
            {
                mul[i][j] = mul[i][j] + a[i][k] * b[k][j];
            }
		}
	}
	
	// Display addition
    cout << "\n Addition of matrices:" << endl;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << add[i][j] << " ";
        }
        cout << endl;
    }

    // Display multiplication
    cout << "\n Multiplication of matrices:" << endl;

    for(int i = 0; i < 2; i++)
    {
        for(int j = 0; j < 2; j++)
        {
            cout << mul[i][j] << " ";
        }
        cout << endl;
    }
	
	return 0;
}
