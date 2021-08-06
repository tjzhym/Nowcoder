// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-6


#include <iostream>

using namespace std;

class Solution {
public:
    int Fibonacci(int n) {
        if (n == 0)
            return 0;
        else if (n == 1)
            return 1;
        else
            return Fibonacci(n - 1) + Fibonacci(n - 2);
    }
};

int main()
{
    Solution Solution;
    int number = 0;
    cout << "Please input the n-th index:" << endl;
    cin >> number;
    int FNumber = Solution.Fibonacci(number);
    cout << FNumber << endl;
}