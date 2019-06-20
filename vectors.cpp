#include <iostream>
#include <vector>
using std::vector;
using std::cout;

int main()
{
	// 1-D vector, different types of initializing it
	vector<int> v_1{0, 1, 2};
	vector<int> v_2 = {3, 4, 5};
	vector<int> v_3;
	v_3 = {6};
	cout << "Vectors initialized!" << "\n";

	// 2-D vector initialization
	vector<vector<int>> v_4 {{1,2}, {3,4}};
	vector<vector<int>> v_5 = {{5,6}, {7,8}};
	vector<vector<int>> v_6;
	v_6 = {{7,8}, {8,9}};
	cout << "2-D vector initialized!" << "\n";
}
