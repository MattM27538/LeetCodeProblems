/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    int maxDepth(Node* root) {
        int maxDepth={0};
        if(root==nullptr){return maxDepth;}
        int currentDepth={1};
        stack<pair<Node*,int>> nodeStack;

        nodeStack.push(make_pair(root,1));

        /*Iterate through and add all nodes from tree
          and their depth to the stack. If the node's depth 
          is greater than the current maxDepth update maxDepth.
        */
        while(!nodeStack.empty()){
            pair<Node*,int> currentNode=nodeStack.top();
            if(currentNode.second>maxDepth){
                maxDepth=currentNode.second;
            }
            nodeStack.pop();
            for(Node* &child:currentNode.first->children){
                nodeStack.push(make_pair(child,(currentNode.second+1)));
            }
        }

        return maxDepth;
    }
};