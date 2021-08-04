// Problem :    https://www.nowcoder.com/activity/oj
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-7-31



#include <vector>
using namespace std;

class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     * ���Ŀ��ֵ���ڷ����±꣬���򷵻� -1
     * @param nums int����vector
     * @param target int����
     * @return int����
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
