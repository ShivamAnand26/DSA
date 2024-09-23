/*Input:
A 5x5 matrix (binary format) where only one element is '1', and the rest are '0's.

Output:
The minimum number of swaps required to bring the '1' to the center (position [2][2]).
*/

#include <bits/stdc++.h>
using namespace std;

int main()
{
    int matrix[5][5];
    int row, column;

    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cin >> matrix[i][j];

            if (matrix[i][j] == 1)
            {
                row = i;
                column = j;
            }
        }
    }
    int swap = abs(row - 2) + abs(column - 2);
    cout << "Number of Swaps : " << swap;
}
