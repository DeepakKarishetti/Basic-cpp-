#include <iostream>

using std::cout;

int main()
{
	int i = 1;

	// Post increment assigns i to c and then increments i.
	int c = i++;

	cout << "Post increment example: " << "\n";
	cout << "The value of c is: " << c << "\n";
	cout << "The value of i is: " << i << "\n";
	cout << "\n";

	// reset i to 1
	i = 1;

	// Pre increment increments i and then assigns to c.
	c = ++i;

	cout << "Pre increment example: " << "\n";
	cout << "The value of c is: " << c << "\n";
	cout << "The value of i is: " << i << "\n";
	cout << "\n";

	// Reset i to 1
	i = 1;

	// Decrement i
	c = i--;
	
	cout << "Decrement example: " << "\n";
	cout << "The value of c is: " << c << "\n";
	cout << "The value of i is: " << i << "\n";
	cout << "\n";
}
