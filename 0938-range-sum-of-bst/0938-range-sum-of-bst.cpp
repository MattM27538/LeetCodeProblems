/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        auto sumOfAllNodeValuesBetweenLowAndHigh {0};
        
        if(isNotNullptr(root->left)){
            addChildNodeValueToSumIfValueBetweenLowAndHigh(root->left, sumOfAllNodeValuesBetweenLowAndHigh, low, high);
        }

        if(isNotNullptr(root->right)){
            addChildNodeValueToSumIfValueBetweenLowAndHigh(root->right, sumOfAllNodeValuesBetweenLowAndHigh, low, high);
        }

        if(nodeValueIsBetweenLowAndHigh(root, low, high)){
            addNodeValueToSum(root, sumOfAllNodeValuesBetweenLowAndHigh);
        }

        return sumOfAllNodeValuesBetweenLowAndHigh;
    }

    bool isNotNullptr(const TreeNode* root){
        return root != nullptr;
    }

    void addChildNodeValueToSumIfValueBetweenLowAndHigh(TreeNode* root, int& sumOfAllNodeValuesBetweenLowAndHigh, const int low, const int high){
        sumOfAllNodeValuesBetweenLowAndHigh += rangeSumBST(root, low, high);
    }

    bool nodeValueIsBetweenLowAndHigh(const TreeNode* root, const int low, const int high){
        return (root->val <= high) && (root->val >= low);
    }

    void addNodeValueToSum(const TreeNode* root, int& sumOfAllNodeValuesBetweenLowAndHigh){
        sumOfAllNodeValuesBetweenLowAndHigh += root->val;
    }
};