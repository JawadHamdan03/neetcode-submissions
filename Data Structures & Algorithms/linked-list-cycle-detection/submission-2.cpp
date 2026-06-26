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
    bool hasCycle(ListNode* head) {
         set<ListNode*> his;

    ListNode * curr = head;
    while (curr)
    {
        if (his.contains(curr))
            return true;

        his.insert(curr);
        curr=curr->next;
    }
    return false;
    }
};
