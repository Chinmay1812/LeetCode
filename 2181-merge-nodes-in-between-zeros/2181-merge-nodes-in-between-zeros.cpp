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
    ListNode* mergeNodes(ListNode* head) 
    {
        if(!head || !head->next)
        {
            return head;
        }
        
        ListNode* temp=new ListNode(0);
        ListNode* ans=temp;
        ListNode* node=head;
        int sum=0;
        node=node->next;
        while(node!=NULL)
        {
            if(node->val==0)
            {
                ListNode* var=new ListNode(sum);
                temp->next=var;
                temp=var;
                sum=0;
            }
            sum+=node->val;
            node=node->next;
        }
        return ans->next;
    }
};