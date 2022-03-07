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
    ListNode* mergeTwoLists(ListNode* head1, ListNode* head2)
    {
        if(!head1)
        {
            return head2;
        }
        if(!head2)
        {
            return head1;
        }
        
        ListNode* temp1=head1;
        ListNode* temp2=head2;
        ListNode* temp=new ListNode(0);
        ListNode* ans=temp;
        while(temp1!=NULL && temp2!=NULL)
        {
            if(temp1->val<=temp2->val)
            {
                   temp->next=temp1;
                   temp=temp->next;
                   temp1=temp1->next; 
            }
            else
            {
                temp->next=temp2;
                temp=temp->next;
                temp2=temp2->next;
            }
            
        }
        if(temp1)
        {
           temp->next=temp1; 
        }
        if(temp2)
        {
            temp->next=temp2;
        }
        
        return ans->next;
    }
};