/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (head==NULL){return NULL;}
        ListNode *temp, *currentNode=head;
        //Iterate through nodes. Check the val of each following node and delete 
        // it if it matches the val of the current node.
        while(currentNode->next!=NULL){
            if(currentNode->val==currentNode->next->val){
                temp=currentNode->next;
                currentNode->next=temp->next;
                delete(temp);
            } else{currentNode=currentNode->next;}
        }
        return head;
    }
};