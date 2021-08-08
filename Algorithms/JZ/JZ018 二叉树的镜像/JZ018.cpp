// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-8


#include <iostream>

using namespace std;

 struct TreeNode {
	int val;
	struct TreeNode *left;
	struct TreeNode *right;
	TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 };

class Solution {
public:
    /**
     * �����е����������������������Ѿ�ָ���������޸ģ�ֱ�ӷ��ط����涨��ֵ����
     *
     *
     * @param pRoot TreeNode��
     * @return TreeNode��
     */
    TreeNode* Mirror(TreeNode* pRoot) {
        // write code here
        TreeNode* pTemp;
        if (pRoot == NULL) {
            return pRoot;
        }

        if (pRoot->left || pRoot->right) {
            pTemp = pRoot->left;
            pRoot->left = Mirror(pRoot->right);
            pRoot->right = Mirror(pTemp);
        }
        return pRoot;
    }
};

int main()
{
    Solution Solution;

}