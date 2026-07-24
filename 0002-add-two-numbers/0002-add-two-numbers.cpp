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
    ListNode* addTwoNumbers(ListNode* num1, ListNode* num2) {
        ListNode* first=num1;
        ListNode* second =num2;
       ListNode*head= new ListNode(0);
       ListNode* temp=head;
       int sum=0;
       int carray=0;
      while(first!=nullptr || second!=nullptr)
      {
        sum=carray;
       if(first!=nullptr)
       {
         sum+=first->val;
         first=first->next;
       }
       if(second!=nullptr)
       {
         sum+=second->val;
         second=second->next;  
       }
        carray=sum/10;
        temp->next = new ListNode(sum%10);
        temp = temp->next;
      }
      if(carray>0)
      {
        temp->next = new ListNode(carray%10);
       temp = temp->next;
        carray/=10;
      }
       return head->next;
    }
};