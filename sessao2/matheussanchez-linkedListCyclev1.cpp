//https://leetcode.com/explore/featured/card/top-interview-questions-easy/93/linked-list/560/


// O(n) Runtime Complexity
// O(1) Space Complexity 
class Solution {
public:
    bool hasCycle(ListNode *head) {
        if(head == NULL)
            return false;
        
        ListNode *p1 = head;
        ListNode *p2 = p1->next;
        
        
        while(p1 != NULL && p2 != NULL){
           if(p2->next != NULL && p2->next->next != NULL){
               if(p1 == p2){
                    return true;
               }else{
                   p1 = p1->next;
                   p2 = p2->next->next;
               }
               
           }else{
               return false;
           }
            
        }
        
        
        return false;
    }
};