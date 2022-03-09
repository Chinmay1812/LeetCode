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
        if(!head || !head->next)
        {
            return head;
        }
        unordered_map<int,int> m;
        ListNode* temp=head;
        while(temp!=NULL)
        {
            m[temp->val]++;
            temp=temp->next;
        }
        temp=head;
        ListNode *node=new ListNode(-1);
        ListNode* ans;
        while(temp!=NULL)
        {
            if(m[temp->val]>1)
            {
                temp=temp->next;
            }
            else if(m[temp->val]==1)
            {
                if(node->next==NULL)
                {
                    node->next=temp;
                    ans=temp;
                    temp=temp->next;
                    node=node->next;
                }
                else
                {
                    node->next=temp;
                    temp=temp->next;
                    node=node->next; 
                }
            }
        }
        node->next=NULL;
        
       
        return ans;
    }
};