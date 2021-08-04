// Problem :    https://www.nowcoder.com/activity/oj
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-4


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int minNumberInRotateArray(vector<int> rotateArray) {
        if (rotateArray.size() == 0)
            return 0;
        int minIndex = 0, count = 0;
        while (rotateArray[minIndex] <= rotateArray[minIndex + 1] && minIndex < rotateArray.size() - 1) {
            minIndex++;
            count++;
            if (count >= rotateArray.size() - 1)
                return rotateArray[0];
        }
        return rotateArray[minIndex + 1];

    }
};

int main()
{
    Solution Solution;
    vector<int> rotateArray = { 3, 4, 5, 1, 2 };
    int minNumber = Solution.minNumberInRotateArray(rotateArray);
    cout << minNumber << endl;
}