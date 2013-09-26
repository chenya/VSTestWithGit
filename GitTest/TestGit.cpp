#include <iostream>
using namespace  std;

int fib(int n);

int fib(int n)
{
	return (n < 3) ? 1 : (fib(n-1) + fib(n - 2)) ;
}


int main()
{
	cout << "Hello World" << endl;
	
	cout << "FIB 10:" << fib(10) << endl;

	return 0;
}