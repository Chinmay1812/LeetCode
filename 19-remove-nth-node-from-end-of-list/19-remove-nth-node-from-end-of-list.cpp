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
    ListNode* removeNthFromEnd(ListNode* head, int n) 
    {
        ListNode* temp=head;
        int size=0;
        while(temp)
        {
            size++;
            temp=temp->next;
        }
        temp=head;
        int k=size-n+1;
        if(k==1)
        {
            head=head->next;return head;
        }
        if(k==size)
        {
            int c=1;
            ListNode* tempo=head;
            while(++c<size)
            {
                tempo=tempo->next;
            }
            tempo->next=NULL;
            return head;
        }
        
        int c=1;
        while(++c<k)
        {
            temp=temp->next;
        }
        temp->next=temp->next->next;
        
        return head;
        
        
    }
};