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
    ListNode* rotateRight(ListNode* head, int k)
    {
        if(!head)
        {
            return head;
        }
        int len=0;
        ListNode* temp=head;
        ListNode* last;
        while(temp)
        {
            len++;
            last=temp;
            temp=temp->next;
        }
        k%=len;
        if(k==0)
        {
            return head;
        }
        last->next=head;
        int c=0;
        k=len-k;
        temp=head;
        while(temp && ++c<k)
        {
            temp=temp->next;
        }
        
         ListNode* ans=temp->next;
        temp->next=NULL;
        return ans;
    }
};