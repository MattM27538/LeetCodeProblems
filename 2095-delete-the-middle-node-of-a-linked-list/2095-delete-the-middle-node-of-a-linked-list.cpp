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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next==nullptr){
            head=nullptr;
            return head;
        }

        ListNode *ptr1=head,*ptr2=head->next;
        //Loop use two pointers, move ptr2 twice the distance of ptr1. When ptr2 reaches
        //end of linked-list, ptr1 will be at node before middle node.
        while(true){
            if(ptr2->next==nullptr){break;}
            else if(ptr2->next->next==nullptr){break;}
            ptr2=ptr2->next->next;
            ptr1=ptr1->next;
        }

        //Delete middle node, point to reattached linked list halves, and return head. 
        ListNode *temp=ptr1->next;
        ptr1->next=ptr1->next->next;
        delete temp;
        return head;
    }
};