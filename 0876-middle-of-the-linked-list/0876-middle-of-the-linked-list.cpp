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
    ListNode* middleNode(ListNode* head) {
        ListNode *midNodePtr=head;
        
        /* While head->next!=nullptr iterate through linked 
           list. If next node !=nullptr Iterate both head and 
           midNodePtr, then delete the node they were previously 
           pointing to. If next node !=nullptr iterate head again.     
        */
        while(head->next!=nullptr){
            // if(head->next!=nullptr){
                ListNode *temp=midNodePtr;
                head=head->next;
                midNodePtr=midNodePtr->next;
                temp=nullptr;
            // }

            if(head->next!=nullptr){
                // temp=head;
                head=head->next;
                //  delete(temp);
            }
            // else {
            //     return midNodePtr;
            // }
        }

        return midNodePtr;
    }
};