#include <iostream>
#include <vector>

using std::cout;
using std::vector;

int main()
{
	// Declaring variables without explicitly stating its type
	auto i = 5;
	auto v_1 = {1, 2, 3};
	cout << "Variables declared without stating its type!" << "\n";

	// Declaring vectors
	auto v_2 = {5, 6, 7, 2,3};
	cout << "Created a 1-D vector using auto!" << "\n";
}
