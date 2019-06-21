#include <iostream>
#include <string>
#include <sstream>

using std::cout;
using std::string;
using std::istringstream;

int main()
{
	string a = "1 2 3";
	
	istringstream my_stream(a);

	int n;
	//my_stream >> n;
	//cout << n << "\n";

	/*while (my_stream)
	{
		my_stream >> n;
		if (my_stream)
		{
			cout << n << "\n";
		}
		else
		{
			cout << "No stream action!" << "\n";
		}
	}*/


	while (my_stream >> n)
	{
		cout << n << "\n";
	}
	cout << "Failed!" << "\n";


	// using mixed types
	string b = "1,2,3";
	istringstream my_streamb(b);
	
	int i;
	char j;

	while (my_streamb >> i >> j)
	{
		cout << i << " " << j << "\n";
	}
	cout << "Failed!" << "\n";
}
