// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-6


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int Fibonacci(int n) {
        vector<int> FArray = { 0, 1 };

        if (n < 2)
            return FArray[n];
    	
        int FibN, FibNMinusOne = 1, FibNMinusTwo = 0;
    	
    	for (int i=2; i<n; i++) {
            FibN = FibNMinusOne + FibNMinusTwo;
            FibNMinusOne = FibN;
            FibNMinusTwo = FibNMinusOne;
    	}
        return FibN;
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