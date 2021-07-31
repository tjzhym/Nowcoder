// Problem :    https://www.nowcoder.com/activity/oj
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-7-31



#include <vector>
using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     * 如果目标值存在返回下标，否则返回 -1
     * @param nums int整型vector
     * @param target int整型
     * @return int整型
     */
    int search(vector<int>& nums, int target) {
        // write code here
        if (nums.empty())
            return -1;
        int lowIndex = 0, highIndex = nums.size() - 1;
        int midIndex = highIndex / 2;

        while (lowIndex < highIndex) {
            if (nums[midIndex] >= target)
                highIndex = midIndex;
            else
                lowIndex = midIndex + 1;
            midIndex = lowIndex + (highIndex - lowIndex) / 2;
        }
        return (nums[midIndex] == target) ? midIndex : -1;
    }
};
