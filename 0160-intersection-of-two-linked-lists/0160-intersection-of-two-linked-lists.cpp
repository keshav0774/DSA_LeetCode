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
    ListNode* getIntersectionNode(ListNode *head1, ListNode *head2) {
        if(!head1 || !head2) return nullptr;
        
        ListNode* temp = head1;
        while(temp->next){
            temp = temp->next;
        }
        temp->next = head1;
        ListNode* slow = head2;
        ListNode* fast = head2;
        while(fast && fast->next){
            slow = slow->next;
            fast = fast->next->next;
            if(slow == fast) break;
        }
        if(fast == nullptr || fast->next == nullptr) {
            temp->next = nullptr;
            return nullptr;
        }
        slow = head2;
        while(slow != fast){
            slow = slow->next;
            fast = fast->next;
        }
        temp->next = nullptr;
        return slow;
    }
};