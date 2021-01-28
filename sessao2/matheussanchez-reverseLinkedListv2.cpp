//https://leetcode.com/explore/featured/card/top-interview-questions-easy/93/linked-list/560/


// O(n) Runtime Complexity
// O(1) Space Complexity 

//this is the same ideia from v1, but we can call an auxiliar function and avoid n^2 complexity
//congrats @marcelodemoraes to ideia 

class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        if(head == NULL)
            return head;
            
        ListNode* h2 = NULL;
        ListNode* aux = reverseListAux(head,&h2);

        
        aux->next = NULL;
        
        return h2;
    }
    
public:
    ListNode* reverseListAux(ListNode* actual,ListNode** head) {
        if(actual != NULL){
           ListNode* returnedHead = reverseListAux(actual->next, head);
            
           if(returnedHead != NULL){
              returnedHead->next = actual;
              return actual;
               
           }else{
               *head = actual;
               
               return actual;
           }
        }else{
            return NULL;
        }
            
    }
};
