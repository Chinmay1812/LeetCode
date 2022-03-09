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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        if(!head||!head->next)
        {
            return head;
        }
        
        ListNode* temp=head;
        ListNode* node=head;
        while(temp!=NULL)
        {
            if(node->val==temp->val)
            {
                temp=temp->next;
            }
            else
            {
                node->next=temp;
                node=node->next;
            }
            
        }
        node->next=NULL;
        return head;
    }
};