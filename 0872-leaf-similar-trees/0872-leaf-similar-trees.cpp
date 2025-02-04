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
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        //Add leaves from each tree to a corresponding stack.
        addLeavesToStacks(root1,treeNodes,treeLeaves1);
        addLeavesToStacks(root2,treeNodes,treeLeaves2);

        if(treeLeaves1.size()!=treeLeaves2.size()){return false;}
        //Compare leaves in each stack if any don't match return false;
        while(!treeLeaves1.empty()){
            if(treeLeaves1.top()!=treeLeaves2.top()){return false;}
            treeLeaves1.pop();
            treeLeaves2.pop();
        }
        return true;
    }

    //Use dfs to find leaves and add them to a stack associated to their tree.
    void addLeavesToStacks(TreeNode *root, stack<TreeNode*> &treeNodes, stack<int16_t> &leavesStack){
        treeNodes.push(root);
        while(!treeNodes.empty()){
            TreeNode *temp=treeNodes.top();
            treeNodes.pop();
            if(!temp->right && !temp->left){leavesStack.push(temp->val);}
            if(temp->right){treeNodes.push(temp->right);}
            if(temp->left){treeNodes.push(temp->left);}
        }
    }

    private:
        stack<TreeNode*> treeNodes;
        stack<int16_t> treeLeaves1;
        stack<int16_t> treeLeaves2;
};