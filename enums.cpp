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


	enum class Direction {kUp, kDown, kRight, kLeft};

	Direction a = Direction::kRight;

	switch(a)
	{
		case Direction::kUp : cout << "Going up!" << "\n";
			break;
		case Direction::kDown : cout << "Going down!" << "\n";
			break;
		case Direction::kRight : cout << "Going right!" << "\n";
			break;	
		case Direction::kLeft : cout << "Going left!" << "\n";
			break;
	}
}
