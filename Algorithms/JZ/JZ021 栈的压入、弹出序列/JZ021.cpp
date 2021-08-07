// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-7


#include <iostream>
#include <stack>
#include <vector>

using namespace std;

class Solution {
public:
    bool IsPopOrder(vector<int> pushV, vector<int> popV) {
        stack<int> popStack;
        int pushIndex = 0, popIndex = 0;
        if (pushV.empty() && popV.empty())
            return true;

        for (int pushIndex = 0; pushIndex < pushV.size(); pushIndex++) {
            if (pushV[pushIndex] != popV[popIndex])
                popStack.push(pushV[pushIndex]);
            else {
                popIndex++;
                while (!popStack.empty() && popV[popIndex] == popStack.top()) {
                    popStack.pop();
                    popIndex++;
                }
            }
        }

        return popStack.empty();
    }
};

int main()
{
    Solution Solution;

}