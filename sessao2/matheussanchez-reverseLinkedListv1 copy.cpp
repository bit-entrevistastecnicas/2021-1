//https://leetcode.com/explore/featured/card/top-interview-questions-easy/93/linked-list/560/


// O(n^2) Runtime Complexity
// O(n) Space Complexity (recursion space :( )
class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head != NULL){
            //first we call all elements and we will work on stack of calls
           ListNode* returnedHead = reverseList(head->next);
            
           if(returnedHead != NULL){
               
               // we return our head all time
               ListNode* auxHead = returnedHead;
               

               //so we have to run our list to put our actual in right place
               while(auxHead->next != NULL){
                   auxHead = auxHead->next;
               }
               
               //putting our actual in right place
               auxHead->next = head;
               head->next = NULL;
               
               return returnedHead;

           // our last node get an null as answer, return himself    
           }else{
               return head;
           }

        // after the last node, head become null   
        }else{
            return NULL;
        }
            
    }
};