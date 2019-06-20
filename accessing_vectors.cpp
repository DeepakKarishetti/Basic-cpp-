#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main()
{
	// 1-D vector
	vector<int> v_1 = {1, 2, 3, 4, 5, 6, 7, 8, 9};
	cout << v_1[0];
	cout << v_1[4];
	cout << v_1[8];
	cout << "\n";

	// Finding the vector size
	cout << v_1.size() << "\n";

	// 2-D vector
	vector<vector<int>> v_2 = {{1,2,3},{4,5,6},{7,8,9}};
	cout << v_2[0][0];
	cout << v_2[1][0];
	cout << v_2[2][0];
	cout << "\n";

	// Finding the vector size
	cout << v_2.size() << "\n";
	cout << v_2[0].size() << "\n";
}
