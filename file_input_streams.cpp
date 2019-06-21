#include <iostream>
#include <fstream>
#include <string>

int main()
{
	std::ifstream my_file;
	my_file.open("pwm_pedal_31.txt");

	if (my_file)
	{
		std::cout << "File has been created!" << "\n";
		std::cout << "\n";
		std::string line;
		while (getline(my_file, line))
		{
			std::cout << line << " ";
		}
	}
}
