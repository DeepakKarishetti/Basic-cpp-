#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main()
{
	// for loop with index variable
	for (int i=0; i<5; i++)
	{
		cout << i << "\n";
	}
	cout << "\n";

	// for loop with a container
	vector<int> v_1 = {1,2,3,4,5,6,7,8,9,10};
	for (int i : v_1)
	{
		cout << i << "\n";
	}
	cout << "\n";

	// for loop on a 2-D vector
	vector<vector<int>> v_2 = {{1,2,3}, {4,5,6}, {7,8,9}};
	for (vector<int> i : v_2)
	{
		cout << "| ";
		for (int j : i)
		{
			cout << j << " ";
		}
		cout << "|";
		cout << "\n";
	}
}
