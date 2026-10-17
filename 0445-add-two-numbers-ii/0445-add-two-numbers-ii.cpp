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
    ListNode* reverse(ListNode* head){

        ListNode* prev = nullptr;
        ListNode* curr = head;
        while(curr != nullptr){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        return prev;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        
        ListNode* first = reverse(l1);
        ListNode* second = reverse(l2);

        ListNode* ans = new ListNode(0);
        ListNode* prev = ans;
        int carry = 0;
        while(first && second){
            int sum = first->val + second->val + carry;
              ans->next = new ListNode(sum%10);
              carry = sum/10;
              ans = ans->next;
              first = first->next;
              second = second->next;
        }
        while(first){
            int sum = first->val + carry;
            ans->next = new ListNode(sum%10);
            carry = sum/10;
            first = first->next;
            ans = ans->next;
        }
        while(second){
            int sum = second->val + carry;
            ans->next = new ListNode(sum%10);
            carry = sum/10;
            second = second->next;
            ans = ans->next;
        }
        if (carry) {
            ans->next = new ListNode(carry);
        }
        return reverse(prev->next);


    }
};