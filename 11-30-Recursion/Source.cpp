#include <iostream>
using namespace std;

int sum(int x)
{
	if (x == 0) { return 0; } // base case for even numbers
	if (x == 1) { return 1; } // base case for odd numbers
	else { return x + sum(x-2); }
}

int fibonacci(int  x)
{
	if (x == 1) { return 1; }
	if (x == 2) { return 1; }
	else { return (fibonacci(x -1) + fibonacci(x-2)); }
}

int Times2Plus1(int x)
{
	if (x == 0) { return 0; }
	else { return (2 * Times2Plus1(x-1) + 1); }
}

int main()
{
	cout << "Sum of numbers = " << sum(10)<<endl;
	cout << "Sum of numbers = " << sum(5) << endl;

	for (int i = 1; i < 10; i++) {
		// printing the first 10 elements in a fibonacci sequence
		cout << fibonacci(i) << " " << endl;
	}
	cout << "Fibonacci number = " << fibonacci(4) << endl;
	cout << "Fibonacci number = " << fibonacci(8) << endl;

	cout << "Number is " << Times2Plus1(3)<<endl;
	getchar();
}