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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
         struct cmp {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;
        }
    };
        
        ListNode* dummy=new ListNode(0);
        ListNode* tail=dummy;
        priority_queue<ListNode*, vector<ListNode*>,cmp> pq;
        ListNode* node;
        for(auto node:lists)
        { if(node!=nullptr)
            pq.push(node);
        }
        while(!pq.empty())
        {
            ListNode* node=pq.top();
            pq.pop();
            tail->next=node;
            tail=node;
            if (node->next!=nullptr) {
    pq.push(node->next);
}
            

        }
        return dummy->next;

        
    }
};