//https://leetcode.com/explore/featured/card/top-interview-questions-easy/93/linked-list/560/


// O(n) Runtime Complexity
// O(1) Space Complexity 
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        ListNode* p1 = head;
        ListNode* p2 = head;
        int i = 0;
        for(i = 0; i < n ; i++){
            if(p2->next != NULL){
                p2 = p2->next;
            }else{
                break;
            }
        }
        
        //now our pointer p2 should be n positions ahead
        
        // maybe we just have our head  
        if(p1 == p2){
            return head->next;
        }
        
        // maybe we have to delete our head
        if(i < n){
            head = head->next;
            return head;
        }
        
        //now our pointer p2 have be n positions ahead
        
        while(p2->next != NULL){
            p1 = p1->next;
            p2 = p2->next;
        }
       
        p1->next = p1->next->next;
     
       return head;
        
    }
};