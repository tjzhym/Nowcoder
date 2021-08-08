// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-8


#include <iostream>
#include <map>
#include <vector>

using namespace std;

class Solution {
public:
    int MoreThanHalfNum_Solution(vector<int> numbers) {
        map<int, int> numberMap;
        for (int number : numbers) {
            numberMap[number]++;
        }
        for (auto pair : numberMap) {
            if (pair.second > numbers.size() / 2) {
                return pair.first;
            }
        }
        return 0;
    }
};

int main()
{
    Solution Solution;
    vector<int> array = { 1,2,3,2,2,2,5,4,2 };
    int number = Solution.MoreThanHalfNum_Solution(array);
	cout << number << endl;
	
}