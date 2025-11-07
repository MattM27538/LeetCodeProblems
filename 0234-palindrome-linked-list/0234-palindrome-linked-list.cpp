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

        getLengthOfLinkedList(forwardIterator, lengthOfLinkedList);

        forwardIterator = head;
        ListNode* iteratorFromMiddleOfList {head};

        moveIteratorToMiddleOfLinkedList(iteratorFromMiddleOfList, lengthOfLinkedList);

        std::stack<int> secondHalfOfListReversed {};

        pushSecondHalfOfListToStack(iteratorFromMiddleOfList, secondHalfOfListReversed, (lengthOfLinkedList/2));

        return linkedListIsPalindrome(forwardIterator, secondHalfOfListReversed, (lengthOfLinkedList/2));
    }

    void getLengthOfLinkedList(ListNode* forwardIterator, int& lengthOfLinkedList){
        while(forwardIterator != nullptr){
            ++lengthOfLinkedList;
            forwardIterator = forwardIterator->next;
        }
    }

    void moveIteratorToMiddleOfLinkedList(ListNode*& iteratorFromMiddleOfList, const int lengthOfLinkedList){
        const int halfOflengthOfLinkedList {(lengthOfLinkedList + 1)/2};

        for(auto i {0}; i < halfOflengthOfLinkedList; ++i){
            iteratorFromMiddleOfList = iteratorFromMiddleOfList->next;
        }
    }

    void pushSecondHalfOfListToStack(ListNode* iteratorFromMiddleOfList, std::stack<int>& secondHalfOfListReversed, const int halfOflengthOfLinkedList){
        for(auto i {0}; i < halfOflengthOfLinkedList; ++i){
            secondHalfOfListReversed.push(iteratorFromMiddleOfList->val);
            iteratorFromMiddleOfList = iteratorFromMiddleOfList->next;
        }
    }

    bool linkedListIsPalindrome(ListNode* forwardIterator, std::stack<int>& secondHalfOfListReversed, const int halfOflengthOfLinkedList){
        for(auto i {0}; i < halfOflengthOfLinkedList; ++i){
            if(forwardIterator->val != secondHalfOfListReversed.top()){
                return false;
            }
            forwardIterator = forwardIterator->next;
            secondHalfOfListReversed.pop();
        }

        return true;
    }
};