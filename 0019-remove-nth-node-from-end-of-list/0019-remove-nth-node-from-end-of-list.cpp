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
       int length = 0;
       ListNode* temp = head;
       while(temp){
         length++;
         temp = temp->next;
       }
       length -= n;
       if(length == 0){
         ListNode* curr = head;
         head = head->next;
         delete curr;
         return head;
       }
       temp = head;
       ListNode* prev = nullptr;
       while(length--){
         prev = temp;
         temp = temp->next;
       }
       prev->next = temp->next;
       delete temp;
       return head;
    }
};