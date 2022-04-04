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
        
        int d=1;
        while(d!=len)
        {
            d++;
            c++;
           if(c<=k) node1=node1->next;
            if(d<=k2) node2=node2->next;
            
        }

       
        swap(node1->val,node2->val);
        return head;
    }
};