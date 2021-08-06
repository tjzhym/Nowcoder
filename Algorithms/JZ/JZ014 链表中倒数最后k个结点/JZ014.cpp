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
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param pHead ListNode��
     * @param k int����
     * @return ListNode��
     */
    ListNode* FindKthToTail(ListNode* pHead, int k) {
        // write code here
        ListNode* pReverseHead = NULL;
        ListNode* pTemp = NULL;
        int listLength = 0;

        while (pHead != NULL) {
            pTemp = pHead->next;
            pHead->next = pReverseHead;
            pReverseHead = pHead;
            pHead = pTemp;
            listLength += 1;
        }

        if (listLength < k)
            return NULL;

        for (int i = 0; i < k; i++) {
            pTemp = pReverseHead->next;
            pReverseHead->next = pHead;
            pHead = pReverseHead;
            pReverseHead = pTemp;
        }

        return pHead;
    }
};

int main()
{
    Solution Solution;

}