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
class Solution 
{
    public:
    class cmp
    {
        public:
        bool operator()(ListNode* a,ListNode* b)
        {
            return a->val>b->val;
        }
    };

    ListNode* mergeKLists(vector<ListNode*>&v) 
    {
        int n=v.size();
        ListNode* head=NULL;
        ListNode* dummy;
        priority_queue<ListNode*,vector<ListNode*>,cmp> pq;
        for(int i=0;i<n;i++)
        {
          if(v[i])  pq.push(v[i]);
        }
        while(!pq.empty())
        {
            ListNode* node=pq.top();
            if(node && node->next)
            {
                pq.push(node->next);
            }
            pq.pop();
            if(head==NULL)
            {
                head=node;
                dummy=head;
            }
            else
            {
                ListNode* temp=new ListNode(node->val);
                dummy->next=temp;
                dummy=temp;
            }
        }
        return head;
    }
};