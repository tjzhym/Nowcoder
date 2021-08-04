// Problem :    https://www.nowcoder.com/activity/oj
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-4

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    bool Find(int target, vector<vector<int> > array) {
        if (array.size() == 0 || array[0].size() == 0)
            return false;

        for (auto row : array) {
            for (auto number : row) {
                if (number == target)
                    return true;
            }
        }
        return false;
    }
};

int main()
{
    Solution Solution;
    int target = 7;
    vector<vector<int>> array = { {1, 2, 8, 9},{2, 4, 9, 12},{4, 7, 10, 13},{6, 8, 11, 15} };
    bool targetInArray = Solution.Find(target, array);
    cout << targetInArray << endl;
}