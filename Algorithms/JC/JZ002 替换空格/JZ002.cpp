// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-4

#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    /**
     * 代码中的类名、方法名、参数名已经指定，请勿修改，直接返回方法规定的值即可
     *
     *
     * @param s string字符串
     * @return string字符串
     */
    string replaceSpace(string s) {
        // write code here
        string outString;
        for (auto character : s) {
            if (character == ' ')
                outString += "%20";
            else
                outString += character;
        }
        return outString;
    }
};

int main()
{
    Solution Solution;
    string s = "We Are Happy";
    string output = Solution.replaceSpace(s);
    cout << output << endl;

}