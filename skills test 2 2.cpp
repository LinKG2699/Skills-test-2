#include <iostream>
#include <conio.h>
using namespace std;

int main()
{
	int c, n;
	

		cout << "Enter a number: ";
	cin >> n;
	cout << "Multiplication table of " << n << ":" << endl;
	for (c=1;c<=10;c++)
	cout << c << "*" << n << ": " <<c*n << endl;

	_getch();
	return 0;
}