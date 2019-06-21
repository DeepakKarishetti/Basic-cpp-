#include <iostream>
#include <vector>
#include <string>

using std::cout;
using std::vector;
using std::string;

int add_function( int i, int j)
{
	return i + j;
}

int add_vectors(vector<int> v)
{
	int sum = 0;
	for (int i : v)
	{
		sum += i;
	}
	return sum;
}

void print_string(string a, string b)
{
	cout << a << " " << b << "\n";
}

int main()
{
	int d = 3;
	int e = 7;

	cout << add_function(d,e) << "\n";

	vector<int> v_1 = {1,2,3,4,5,6,7,8,9,10};
	
	cout << add_vectors(v_1) << "\n";
	
	string s_1 = "c++ is ";
	string s_2 = "awesome.";

	print_string(s_1, s_2);

}
