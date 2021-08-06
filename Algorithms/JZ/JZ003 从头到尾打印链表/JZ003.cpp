// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-4

#include <vector>
#include <iostream>
struct ListNode;
using namespace std;


struct ListNode {
    int val;
    struct ListNode *next;
    ListNode(int x) :
          val(x), next(NULL) {
    }
};

class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
        vector<int> outVector;
        ListNode* reversedListNode = NULL;
        ListNode* pTemp = NULL;
        while (head != NULL) {
            pTemp = head->next;
            head->next = reversedListNode;
            reversedListNode = head;
            head = pTemp;
        }
        while (reversedListNode != NULL) {
            outVector.push_back(reversedListNode->val);
            reversedListNode = reversedListNode->next;
        }
        return outVector;

    }
};

int main()
{
    Solution Solution;
    
    Solution.printListFromTailToHead();
    cout << output << endl;

}