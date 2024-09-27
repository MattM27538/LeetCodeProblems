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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head==NULL){return NULL;}
        if(k==0){return head;}
        int lenOfList=1, remainder=0;
        ListNode *tail=head, *newHead;
        //Get length of linked list.
        while(tail->next!=NULL){
            ++lenOfList;
            tail=tail->next;
        }
        tail->next=head;
        //Determine where to cut link list.
        if(k%=lenOfList){
            for(int i=0;i<lenOfList-k;i++){
                tail=tail->next;
            }
        }
        //Rearrange linked list.
        newHead=tail->next;
        tail->next=NULL;
        return newHead;
    }
};