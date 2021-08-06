// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-6


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param array int����vector
     * @return int����vector
     */
    vector<int> reOrderArray(vector<int>& array) {
        // write code here
        vector<int> oddArray, evenArray;

        for (auto number : array) {
            if (number % 2 == 1)
                oddArray.push_back(number);
            else
                evenArray.push_back(number);
        }

        for (auto number : evenArray)
            oddArray.push_back(number);

        return oddArray;
    }
};

int main()
{
    Solution Solution;
    vector<int> array = { 2, 4, 6, 5, 7 };
    vector<int> oddFirstArray = Solution.reOrderArray(array);
    for (auto number : oddFirstArray)
        cout << number << ' ';
}