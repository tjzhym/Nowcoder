// Problem :    https://www.nowcoder.com/activity/oj
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-7-31


#include <cstdlib>
//
//  Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
 //
class Solution {
public:
    bool hasCycle(ListNode* head) {
        ListNode* pFast = head;
        ListNode* pSlow = head;
        while (pFast != NULL && pFast->next != NULL)
        {
            pFast = pFast->next->next;
            pSlow = pSlow->next;

            if (pSlow == pFast)
                return true;
        }
        return false;
    }
};
