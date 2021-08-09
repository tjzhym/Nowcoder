// Problem :    https://www.nowcoder.com/ta/coding-interviews
// Solution:    https://github.com/tjzhym/Nowcoder
// Author :     zhym (tjzhym)
// Date   :     2021-8-9

#include <vector>
#include <iostream>
using namespace std;

// Definition for binary tree
 struct TreeNode {
     int val;
     TreeNode *left;
     TreeNode *right;
     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 };

class Solution {
public:
 TreeNode* reConstructBinaryTree(vector<int> pre, vector<int> vin) {
     if (vin.empty()) {
         return NULL;
     }
     int rootIndex = 0;
     while (vin[rootIndex] != pre[0]) {
         rootIndex++;
     }

     vector<int> leftVinVector(vin.begin(), vin.begin() + rootIndex);
     vector<int> rightVinVector(vin.begin() + rootIndex + 1, vin.end());
     vector<int> leftPreVector(pre.begin() + 1, pre.begin() + rootIndex + 1);
     vector<int> rightPreVector(pre.begin() + rootIndex + 1, pre.end());

     TreeNode* binaryTree = new TreeNode(pre[0]);

     binaryTree->left = reConstructBinaryTree(leftPreVector, leftVinVector);
     binaryTree->right = reConstructBinaryTree(rightPreVector, rightVinVector);

     return binaryTree;
 }
};

int main()
{
    Solution Solution;
    vector<int> pre = { 1,2,4,7,3,5,6,8 };
    vector<int> vin = { 4,7,2,1,5,3,8,6 };
    TreeNode*  binaryTree = Solution.reConstructBinaryTree(pre,vin);
    

}