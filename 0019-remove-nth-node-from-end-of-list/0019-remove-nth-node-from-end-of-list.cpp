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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head->next==NULL){
            delete(head);
            return NULL;
        }
        ListNode *trailing=head,*leading=head;
        //Set distance of n-1 between leading and trailing pointers.
        for(int i=0;i<n-1;i++){
            leading=leading->next;
            if(leading->next==NULL){break;}
        }
        //Find location to deleted and set trailing to that node.
        while(leading->next!=NULL){
            leading=leading->next;
            trailing=trailing->next;
        }
        if(trailing==head){
            head=head->next;
            delete(trailing);
            return head;
        }
        //Remove node to be deleted.
        ListNode *temp=head;
        while(temp->next!=trailing){temp=temp->next;}
        temp->next=trailing->next;
        delete(trailing);
        return head;
    }
};