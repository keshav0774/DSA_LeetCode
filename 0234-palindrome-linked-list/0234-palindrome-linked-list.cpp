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
ListNode* reverse(ListNode* curr, ListNode* prev) {
    while (curr) {
        ListNode* nextNode = curr->next;
        curr->next = prev;
        prev = curr;
        curr = nextNode;
    }
    return prev;
}

    bool isPalindrome(ListNode* head) {
       ListNode* slow = head; 
       ListNode* fast = head;
       while( fast && fast->next)
       {
              slow= slow->next;
              fast = fast->next->next;
       }
       ListNode* second = reverse(slow,nullptr);
       ListNode* first = head;
       while(second)
       {
           if(first->val != second->val) return false;
           first = first->next;
           second= second->next;
       }
        return true;
    }
};