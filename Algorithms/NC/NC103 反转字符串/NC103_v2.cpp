// Problem :    https://www.nowcoder.com/activity/oj
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-10-29


#include <string>
using namespace std;


class Solution {
public:
    /**
    * ��ת�ַ���
    * @param str string�ַ��� 
    * @return string�ַ���
    */
    string solve(string str) {
        // write code here
        reverse(str.begin(), str.end());
        return str;
    }
};

// Reverse Function
