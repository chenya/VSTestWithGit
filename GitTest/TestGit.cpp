#include <iostream>
using namespace  std;

int fib(int n);

int fib(int n)
{
	if (n < 3)
		return 1;

	return ( fib(n - 1) + fib(n - 2) ) ;
}


int main()
{
	cout << "Hello World" << endl;
	
	cout << "FIB 5:" << fib(5) << endl;

	return 0;
}