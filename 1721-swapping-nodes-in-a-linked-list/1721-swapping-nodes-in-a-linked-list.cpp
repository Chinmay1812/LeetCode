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
    ListNode* swapNodes(ListNode* head, int k) 
    {
        auto temp=head;
        int len=0;
        while(temp!=NULL)
        {
            len++;
            temp=temp->next;
        }
        int c=1;
        temp=head;
        auto node1=head;
        auto node2=head;
        int k2=len-k+1;
        
        while(c!=k)
        {
            c++;
            node1=node1->next;
        }
        c=1;
        while(c!=k2)
        {
            c++;
            node2=node2->next;
        }
        swap(node1->val,node2->val);
        return head;
    }
};