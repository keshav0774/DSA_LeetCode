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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        
        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* next = curr->next;

        int firstCP = -1;
        int index = 1, minDistance = INT_MAX , maxDistance = INT_MIN, previousCP = -1;

        while(next != nullptr){

            //localMaxima 
            if((prev->val < curr->val && curr->val > next->val) || (prev->val > curr->val && next->val > curr->val)){
               
                if(firstCP == -1){
                    firstCP = index;
                }
                if(previousCP != -1){
                     minDistance = min(minDistance ,index - previousCP);

                }
                previousCP = index;
            }
            index++;
            prev = curr;
            curr = next; 
            next = next->next;
           
        }
        if(firstCP == previousCP) return {-1, -1};
         maxDistance = previousCP - firstCP;

        return {minDistance , maxDistance};
        
        
    }
};