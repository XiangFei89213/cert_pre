// List in C language (1. head pointer, tail pointer, 2. point to the last element vs point to the tail) 
// heap vs stack (malloc is on heap and will continue to exist even the func ends, so remember to free() ), define int is on struct, will disappear when func ends.
// struct pointer : ptr->a == (*ptr).A


/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* addTwoNumbers(struct ListNode* l1, struct ListNode* l2) {

    // create 2 pointer to head and tail
    struct ListNode *head = NULL;
    struct ListNode *curr = NULL; 
    int carry = 0;
    

    while(l1!=NULL || l2!=NULL || carry!=0 ){

        // handle if l1 or l2 ends first
        int x = (l1 == NULL ) ? 0: l1->val;
        int y = (l2 == NULL ) ? 0: l2->val;
        int sum = x + y + carry ;

        // create a new node 
        struct ListNode *node = (struct ListNode*)malloc(sizeof(struct ListNode));
        node->val = sum % 10;
        node->next = NULL;

        // update l1, l2, carry
        carry = sum /10;
        if(l1 !=NULL) l1 = l1->next;
        if(l2 !=NULL) l2 = l2->next;

        // if head point to new node 
        if(head == NULL){
            head = node;
            curr = node;
        } else {
            // make the last one link to new node 
            curr->next = node;
            // move curr to point at the new node
            curr = node;
        }
        

    }

    return head;


        


    
}
