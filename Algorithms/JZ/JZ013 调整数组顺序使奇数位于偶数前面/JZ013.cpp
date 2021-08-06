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
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param array int整型vector
     * @return int整型vector
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