#include<vector>
using namespace std;
class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int startingRow = 0;
        int startingCol = 0;
        int endingRow = n-1;
        int endingCol = n-1;
        while(startingRow<endingRow && startingCol<endingCol)
        {
            vector<int> temp;
            vector<int> temp1;
            for(int i = startingRow; i < endingRow ; i++)
            {
                temp.push_back(matrix[i][endingCol]);
                matrix[i][endingCol] = matrix[startingRow][i];
            }
            temp1.clear();
            for(int i = endingCol; i > startingCol ; i--)
            {
                temp1.push_back(matrix[endingRow][i]);
                matrix[endingRow][i] = temp[endingCol - i];
            }
            temp.clear();
            for(int i = endingRow ; i > startingRow ; i--)
            {
                temp.push_back(matrix[i][startingCol]);
                matrix[i][startingCol] = temp1[endingRow-i];
            }
            for(int i = startingCol ; i < endingCol ; i++)
            {
                matrix[startingRow][i] = temp[i-startingCol];
            }
            temp.clear();
            temp1.clear();
            startingRow=startingRow+1;
            startingCol=startingCol+1;
            endingRow = endingRow-1;
            endingCol = endingCol-1;
        }  
    }
};