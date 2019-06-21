#include <iostream>
#include <fstream>
#include <vector>
#include <string>

using std::cout;
using std::vector;
using std::string;

void ReadBoardFile(string path)
{
	std::ifstream my_file;
	my_file.open(path);
	
	if (my_file)
	{
		string line;
		while (getline(my_file, line))
		{
			cout << line << "\n";
		}
	}
}

int main()
{	
	string file_name = "./1.board";
	ReadBoardFile(file_name);
}	
