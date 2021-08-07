// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-7


#include <iostream>
#include <stack>

using namespace std;

class Solution {
public:
    stack<int> numberStack, minNumberStack;

    void push(int value) {
        numberStack.push(value);

        if (minNumberStack.empty() || value < minNumberStack.top())
            minNumberStack.push(value);
        else
            minNumberStack.push(minNumberStack.top());
    }
    void pop() {
        numberStack.pop();
        minNumberStack.pop();
    }
    int top() {
        return numberStack.top();
    }
    int min() {
        return minNumberStack.top();
    }
};

int main()
{
    Solution Solution;

}