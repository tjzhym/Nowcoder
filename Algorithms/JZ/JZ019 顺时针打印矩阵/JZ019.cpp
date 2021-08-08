// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-8


#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> printMatrix(vector<vector<int> > matrix) {
        vector<int> circledVector;
        int rowLowerBound = 0, rowUpperBound = matrix.size() - 1;
        int columnLowerBound = 0, columnUpperBound = matrix[0].size() - 1;
        int rowIndex = 0, columnIndex = 0;
        while (rowLowerBound <= rowUpperBound && columnLowerBound <= columnUpperBound) {
            for (int columnIndex = columnLowerBound; columnIndex <= columnUpperBound; columnIndex++) {
                circledVector.push_back(matrix[rowLowerBound][columnIndex]);
            }
            rowLowerBound++;
            for (int rowIndex = rowLowerBound; rowIndex <= rowUpperBound; rowIndex++) {
                circledVector.push_back(matrix[rowIndex][columnUpperBound]);
            }
            columnUpperBound--;
            if ((columnUpperBound - columnLowerBound) >= 0 && (rowUpperBound - rowLowerBound) >= 0) {
                for (columnIndex = columnUpperBound; columnIndex >= columnLowerBound; columnIndex--) {
                    circledVector.push_back(matrix[rowUpperBound][columnIndex]);
                }
            }
            rowUpperBound--;
            if ((rowUpperBound - rowLowerBound) >= 0 && (columnUpperBound - columnLowerBound) >= 0) {
                for (rowIndex = rowUpperBound; rowIndex >= rowLowerBound; rowIndex--) {
                    circledVector.push_back(matrix[rowIndex][columnLowerBound]);
                }
            }
            columnLowerBound++;
        }
        return circledVector;
    }
};

int main()
{
    Solution Solution;
    vector<vector<int>> matrix = { { 1 , 2 },{ 3 , 4 } };
    vector<int> circledVector = Solution.printMatrix(matrix);
	for (int i=0; i<circledVector.size(); i++) {
        cout << circledVector[i] << ' ';
	}
}