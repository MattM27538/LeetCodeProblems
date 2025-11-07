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
    bool isPalindrome(ListNode* head) {
        auto lengthOfLinkedList {0};
        ListNode* forwardIterator {head};

        while(forwardIterator != nullptr){
            ++lengthOfLinkedList;
            forwardIterator = forwardIterator->next;
        }

        forwardIterator = head;
        ListNode* iteratorFromMiddleOfList {head};

        for(auto i {0}; i < ((lengthOfLinkedList + 1)/2); ++i){
            iteratorFromMiddleOfList = iteratorFromMiddleOfList->next;
        }

        std::stack<int> secondHalfOfListReversed {};

        for(auto i {0}; i < (lengthOfLinkedList/2); ++i){
            secondHalfOfListReversed.push(iteratorFromMiddleOfList->val);
            iteratorFromMiddleOfList = iteratorFromMiddleOfList->next;
        }

        for(auto i {0}; i < (lengthOfLinkedList/2); ++i){
            if(forwardIterator->val != secondHalfOfListReversed.top()){
                return false;
            }

            forwardIterator = forwardIterator->next;
            secondHalfOfListReversed.pop();
        }

        return true;
    }
};