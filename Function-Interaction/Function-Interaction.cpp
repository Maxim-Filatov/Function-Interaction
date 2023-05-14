#include <iostream>

using namespace std;
// global variables 'x' and 'y'
unsigned long int x;
int y;
signed long int arr[5];
string separator = "====================================================================\n";
void testFunction();
void testArray();
int  sum(unsigned long int* px, int* py);

int main()
{
	bool action = true;																		// exit flag
	int choice;
	cout << "Enter the number (1, 2 or 3):\n";
	while (action)
	{
		cout << "1. Task #1\n" << "2. Task #2\n" << "3. Exit\n" << "You entered: ";
		cin  >> choice;
		switch (choice)
		{
			case 1: testFunction(); break;
			case 2: testArray(); break;
			case 3: action = false; break;
			default:
				cout << "Enter the number (1, 2 or 3):\n" << "You entered: ";
				break;
		}
	}
}

// Function using global variables
void testFunction()
{
	cout << separator << "Enter the first number: ";
	cin >> x;
	cout << "Enter the second number: "; 
	cin >> y;
	int result = sum(&x, &y);
	cout << "\nResult is " << (double)result << "\n";
	cout << "Memory occupation: " << sizeof(result) << " byte\n";
	cout << "\nConvert to the new data type (double):\n";
	cout << "New memory occupation:  " << sizeof((double)(result)) << " byte\n" << separator;
}

// Function using pointers
int sum(unsigned long int* px, int* py)
{
	int c;
	c = (*px) + (*py);
	return c;
}

// Function for initializing an array and finding the minimum element
void testArray()
{
	cout << separator << "Enter the elements of the array:\n";
	for (int i = 0; i < 5; i++)
	{
		cout << i << ") ";
		cin >> arr[i];
	}
	signed long int min = 2147483647;															//
	for (int i = 0; i < 5; i++)
	{
		if (arr[i] < min)
			min = arr[i];
	}
	cout << "\nThe minimum element of the array is " << min << "\n" << separator;
}