#include <bits/stdc++.h>
using namespace std;
bool isvalid(vector<vector<char>> &board, int x, int y, char c)
{
    for (int i = 0; i < 9; i++)
    {
        if (board[x][i] == c)
            return false;
        if (board[i][y] == c)
            return false;
        if (board[3 * (x / 3) + i / 3][3 * (y / 3) + i % 3] == c)
            return false;
    }
    return true;
}
bool solve(vector<vector<char>> &board)
{
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            if (board[i][j] == '.')
            {
                for (char c = '1'; c <= '9'; c++)
                {
                    if (isvalid(board, i, j, c))
                    {
                        board[i][j] = c;
                        if (solve(board) == true)
                        {
                            return true;
                        }
                        else
                        {
                            board[i][j] = '.';
                        }
                    }
                }
                return false;
            }
        }
    }
    return true;
}
void solveSudoku(vector<vector<char>> &board)
{
    solve(board);
}
int main()
{
    cout << "Enter input :" << endl;
    vector<vector<char>> board(9, vector<char>(9, '.'));
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cin >> board[i][j];
        }
    }
    solveSudoku(board);
    cout << "The solution is : " << endl;
    for (int i = 0; i < 9; i++)
    {
        for (int j = 0; j < 9; j++)
        {
            cout << board[i][j] << "|";
        }
    
        cout << endl;
    }
    return 0;
}