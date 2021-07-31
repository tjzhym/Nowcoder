// Problem :    https://www.nowcoder.com/activity/oj
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-7-31


#include <cstddef>

struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
            val(x), next(NULL) {
    }

class Solution {
public:
    ListNode* ReverseList(ListNode* pHead) {
        if (pHead == NULL)
            return NULL;
        ListNode* pReverseHead = NULL;
        ListNode* pTemp = NULL;
        while (pHead != NULL) {
            pTemp = pHead->next;
            pHead->next = pReverseHead;
            pReverseHead = pHead;
            pHead = pTemp;
        }
        return pReverseHead;
    }
};
