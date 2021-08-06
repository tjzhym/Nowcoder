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
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param s string�ַ���
     * @return string�ַ���
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