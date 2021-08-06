 // Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-6


#include <iostream>

using namespace std;

class Solution {
public:
    double Power(double base, int exponent) {
        if (exponent < 0) {
            base = 1 / base;
            exponent = -exponent;
        }
        if (base == 0.0)
            return 0.0;
        else if (exponent == 0)
            return 1.0;

        while (exponent != 0) {
            exponent--;
            return Power(base, exponent) * base;
        }

        return -1;
    }
};

int main()
{
    Solution Solution;
    int base = 0, exponent = 0;
    cout << "Please input base and integer exponent:" << endl;
    cin >> base >> exponent;
    int powerResult = Solution.Power(base, exponent);
    cout << powerResult << endl;
}