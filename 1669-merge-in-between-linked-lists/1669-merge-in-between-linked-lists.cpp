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
    ListNode* mergeInBetween(ListNode* head, int a, int b, ListNode* list2) {
       

       ListNode* temp = head;
       ListNode* prev = temp;
       ListNode* join = head;
       for(int i=0;i<a; i++) {
         prev = temp;
         temp = temp->next; 
       }
       for( int i = a; i<=b; i++) temp = temp->next;
       prev -> next = list2; 
       while(prev->next) 
       {
        prev = prev->next;
       }
       prev->next = temp; 

       return head;
    }
};