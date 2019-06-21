#include <iostream>
#include <vector>

using std::vector;
using std::cout;

void PrintBoard(vector<vector<int>> board)
{
	for (i : board)
	{
		for (int j : i)
		{
			cout << j << " ";
		}
		cout << "\n";
	}
}
/* 
// Alternate way to do the above using index reference
void PrintBoard(const vector<vector<int>> board)
{
	for (int i = 0; i < board.size(); i++)
	{
		for (int j = 0; j < board[i].size(); j++)
		{
			cout << board[i][j];
		}
		cout << "\n";
	}
}
*/
int main()
{
	// Declaring the board variable
	vector<vector<int>> board;
	board = {{0, 1, 0, 0, 0, 0},
		 {0, 1, 0, 0, 0, 0},
		 {0, 1, 0, 0, 0, 0},
		 {0, 1, 0, 0, 0, 0},
		 {0, 0, 0, 0, 1, 0}};

	PrintBoard(board);
}
