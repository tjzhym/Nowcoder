// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-6


#include <iostream>

using namespace std;

class Solution {
public:
    int jumpFloorII(int number) {
        if (number == 1)
            return 1;
        else if (number == 2)
            return 2;
        else
            return jumpFloorII(number - 1) + 2 * jumpFloorII(number - 2);
    }
};

int main()
{
    Solution Solution;
    int number = 0;
    cout << "Please input the n-th index:" << endl;
    cin >> number;
    int JNumber = Solution.jumpFloorII(number);
    cout << JNumber << endl;
}