#include <iostream>

using std::cout;

int main()
{
	bool i = true;
	
	// If loop
	if (i)
	{
		cout << "Its the if condition working" << "\n";
	}
	cout << "\n";
	
	// While loop
	auto j = 0;

	while (j < 5)
	{
		cout << j << "\n";
		j++;
	}
	cout << "\n";

	// If and while loop to check for even numbers beteween 1 and 10
	int k = 1;
	while (k < 11)
	{
		if (k % 2 == 0)
		{
			cout << k << "\n";
		}
		k++;
	}	
}
