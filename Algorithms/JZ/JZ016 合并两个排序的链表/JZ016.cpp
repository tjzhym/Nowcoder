// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-6


#include <iostream>

using namespace std;

struct ListNode {
	int val;
	struct ListNode *next;
	ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* Merge(ListNode* pHead1, ListNode* pHead2) {
        if (!pHead1)
            return pHead2;
        else if (!pHead2)
            return pHead1;
        else if (pHead1->val < pHead2->val) {
            pHead1->next = Merge(pHead1->next, pHead2);
            return pHead1;
        }
        else {
            pHead2->next = Merge(pHead1, pHead2->next);
            return pHead2;
        }
    }
};

int main()
{
    Solution Solution;

}