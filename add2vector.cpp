#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main()
{
	vector<int> v_1 = {1, 2, 3};
	//Print 
	for (int i : v_1)
	{
		cout << i << "\n";
	}
	
	//add 4 to the back of the vector
	v_1.push_back(4);

	cout << "\n";
	
	for (int j : v_1)
	{
		cout << j << "\n";
	}

}
