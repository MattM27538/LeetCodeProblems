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
    ListNode* removeElements(ListNode* head, int val) {
        if(!head){return nullptr;}
        ListNode *iterator=head;
        //Iterate through linked list and delete all nodes with val==val.
        while(iterator->next!=nullptr){
            if(iterator->next->val==val){
                ListNode *temp;
                temp=iterator->next;
                iterator->next=temp->next;
                delete(temp);
            } else{iterator=iterator->next;}
        }
        //Move head pointer if val of head needs to be removed.
        if(head->val==val){
            if(head->next==nullptr){return nullptr;}
            ListNode *temp;
            temp=head;
            head=head->next;
        }
        return head;
    }
};