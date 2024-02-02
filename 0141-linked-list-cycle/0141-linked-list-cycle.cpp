/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        //Use Floyd's cycle detection algorithm
        if(!head || !head->next) {
            return 0;
        }
        
        ListNode *fastPtr=head, *slowPtr=head;
        
        while(fastPtr && fastPtr->next) {
            fastPtr=fastPtr->next->next;
            slowPtr=slowPtr->next;
            
            if(fastPtr==slowPtr) {
                return 1;
            }
        }
        
        return 0;
    }
};