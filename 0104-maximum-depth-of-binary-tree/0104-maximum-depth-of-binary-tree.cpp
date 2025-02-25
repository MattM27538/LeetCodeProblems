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
    int maxDepth(TreeNode* root) {
        int maxDepth={0};
        if(root==nullptr){return maxDepth;}
        
        //Push root to stack with depth 1.
        stack<pair<TreeNode*,int>> myStack;
        myStack.push(make_pair(root,1));

        /*If top node from stack has children push children to stack with depth=depth+1,
          else if depth of node is greated than current maxDepth update maxDepth.
        */
        while(!myStack.empty()){
            TreeNode *tempNode=myStack.top().first;
            int tempNodeVal=myStack.top().second;
            myStack.pop();
            
            if(!tempNode->left && !tempNode->right){maxDepth=max(maxDepth,tempNodeVal);}
            if(tempNode->left){myStack.push(std::make_pair(tempNode->left,tempNodeVal+1));}
            if(tempNode->right){myStack.push(std::make_pair(tempNode->right,tempNodeVal+1));}
        }

        return maxDepth;
    }
};