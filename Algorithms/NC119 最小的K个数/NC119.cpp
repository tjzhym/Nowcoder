// Problem :    https://www.nowcoder.com/activity/oj
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-7-31


#include <vector>
using namespace std;

class Solution {
public:
    vector<int> GetLeastNumbers_Solution(vector<int> input, int k) {
	    vector<int> leastNumbers;
        int minIndex = 0;//
        for (int i = 0; i < k; i++) {
            for (int j = 0; j < input.size(); j++)
                if (input[j] < input[minIndex])
                    minIndex = j;
            leastNumbers.push_back(input[minIndex]);
            input[minIndex] = 10001;
        }
        return leastNumbers;
    }
};
