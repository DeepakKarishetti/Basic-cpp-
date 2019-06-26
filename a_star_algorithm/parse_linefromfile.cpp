#include <iostream>
#include <fstream>
#include <vector>
#include <sstream>
#include <string>

using std::cout;
using std::vector;
using std::ifstream;
using std::istringstream;
using std::string;

vector<int> ParseLine(string line)
{
	istringstream s_line(line);
	int n;
	char c;
	vector<int> tow;
	while (s_line >> n >> c && c == ',')
	{
		row.push_back(n);
	}
	return row;
}

int main()
{
	ParseLine();
}
