#include <iostream>

using std::cout;

int main()
{
	enum class Color {white, black, blue, red};

	Color my_color = Color::blue;
	
	if (my_color == Color::red)
	{
		cout << "The color of my car is red!" << "\n";
	}
	else
	{
		cout << "Of course not red!" << "\n";
	}
}
