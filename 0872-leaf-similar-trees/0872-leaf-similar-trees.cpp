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
        stack<int16_t> treeLeaves1;
        stack<int16_t> treeLeaves2;
        stack<TreeNode*> treeNodes;
        

        treeNodes.push(root1);
        while(!treeNodes.empty()){
            TreeNode *temp=treeNodes.top();
            treeNodes.pop();
            if(!temp->right && !temp->left){
                treeLeaves1.push(temp->val);
            }
            if(temp->right){treeNodes.push(temp->right);}
            if(temp->left){treeNodes.push(temp->left);}
        }

        treeNodes.push(root2);
          while(!treeNodes.empty()){
            TreeNode *temp=treeNodes.top();
            treeNodes.pop();
            if(!temp->right && !temp->left){
                treeLeaves2.push(temp->val);
            }
            if(temp->right){treeNodes.push(temp->right);}
            if(temp->left){treeNodes.push(temp->left);}
        }

        if(treeLeaves1.size()!=treeLeaves2.size()){return false;}
        while(!treeLeaves1.empty()){
            if(treeLeaves1.top()!=treeLeaves2.top()){return false;}
            treeLeaves1.pop();
            treeLeaves2.pop();
        }

        // while(!treeLeaves.empty()){
        //     cout<< treeLeaves.front() << " ";
        //     treeLeaves.pop();
        //     }
        return true;
    }


};