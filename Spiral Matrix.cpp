#include<vector>
using namespace std;
class Solution
{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix)
    {
        vector<int> spiral;
        int row = matrix.size(), col = matrix[0].size(), count = 0;
        int startingCol = 0;
        int startingRow = 0;
        int endingCol = col - 1;
        int endingRow = row - 1;
        while (count < row * col)
        {
            for (int i = startingCol; count < row * col && i <= endingCol; i++)
            {
                spiral.push_back(matrix[startingRow][i]);
                count++;
            }
            startingRow++;
            for (int i = startingRow; count < row * col && i <= endingRow; i++)
            {
                spiral.push_back(matrix[i][endingCol]);
                count++;
            }
            endingCol--;
            for (int i = endingCol; count < row * col && i >= startingCol; i--)
            {
                spiral.push_back(matrix[endingRow][i]);
                count++;
            }
            endingRow--;
            for (int i = endingRow; count < row * col && i >= startingRow; i--)
            {
                spiral.push_back(matrix[i][startingCol]);
                count++;
            }
            startingCol++;
        }
        return spiral;
    }
};