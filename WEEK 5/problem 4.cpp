//PROBLEM 4

#include <iostream>
using namespace std;

int main() {
	int size;
	cout << "Enter size of array  : ";
	cin >> size;
	
	int arr[size] ;
	int largest, secondLargest;
	
  cout << "Enter array elements : ";
   for (int i = 0; i < size; i++)
   {
    cin >> arr[i];
   }
    
   largest = arr[0];
   secondLargest = arr[0];
    
   for(int i = 0 ; i < size ; i++)
   {
    if(arr[i] > largest)
    {
    	secondLargest = largest ;
    	largest = arr[i];
		  }
		else if(arr[i] > secondLargest && arr[i] != largest )
		  {
		 	secondLargest = arr[i];
		  }
	  }
	
	cout << "Largest element =  "  << largest;
 cout << " Second largest element = " << secondLargest;

    return 0;
}
