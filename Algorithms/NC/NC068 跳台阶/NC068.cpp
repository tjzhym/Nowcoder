// Problem :    https://www.nowcoder.com/activity/oj
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-7-31


class Solution {
public:
    int jumpFloor(int number) {
        if (number <= 0)
            return 0;
        else if (number == 1)
            return 1;
        else if (number == 2)
            return 2;
        else
            return jumpFloor(number - 1) + jumpFloor(number - 2);
    }
};
