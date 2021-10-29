// Problem :    https://www.nowcoder.com/activity/oj
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-10-29


#include <string>
using namespace std;


class Solution {
public:
    /**
    * ·´×ª×Ö·û´®
    * @param str string×Ö·û´® 
    * @return string×Ö·û´®
    */
    string solve(string str) {
        // write code here
        for (int index = 0; index < str.size()/2; ++index) {
            swap(str[index], str[str.size() - 1 - index]);
        }
        return str;
    }
};

// Traverse
