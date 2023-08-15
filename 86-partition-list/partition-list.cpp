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
    ListNode* partition(ListNode* head, int x) {
        ListNode* curr=head; //pointer to traverse list

        // less list creation
        ListNode* dummyLess=new ListNode(0);
        ListNode* lessTail=dummyLess;

        // greater list creation
        ListNode* dummygreater=new ListNode(0);
        ListNode* greatTail=dummygreater;

        while(curr!=nullptr)
        {
            // check if element is less than or greater than x
            if(curr->val < x)
            {
                // put it in less list
                lessTail->next = new ListNode(curr->val);
                lessTail = lessTail->next;
            }
            else
            {
                 // put it in greater list
                greatTail->next = new ListNode(curr->val);
                greatTail = greatTail->next;
            }
            curr=curr->next;
        }
        // add greater list to the end of less list

        lessTail->next = dummygreater->next;
         
        return dummyLess->next;
    }
};