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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1==NULL&&list2==NULL){return NULL;}
        else if(list1==NULL){return list2;}
        else if(list2==NULL){return list1;}
        ListNode *result=NULL, *temp=NULL, *temp2=NULL;
        if(list1->val>list2->val){result=list2; list2=list2->next;}
        else{result=list1; list1=list1->next;}
        temp=result;
        // Compare values of pointers at both lists, attach lowest value to final list,
        // then increment pointer that had lowest value to next node.
        while(list1!=NULL&&list2!=NULL){
            if(list1->val>list2->val){temp2=list2->next; temp->next=list2; list2=temp2;}
            else{temp2=list1->next; temp->next=list1; list1=temp2;}
            temp=temp->next; 
        }
        if(list1==NULL){temp->next=list2;}
        else{temp->next=list1;}
        return result;
    }
};