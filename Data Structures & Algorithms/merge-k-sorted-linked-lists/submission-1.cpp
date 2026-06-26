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
         vector<int> outList;
    for (auto head : lists)
    {
        ListNode * curr =head;
        while (curr)
        {
            outList.push_back(curr->val);
            curr=curr->next;
        }
    }

    sort(outList.begin(),outList.end());

    ListNode * dummy=new ListNode();
    ListNode * curr=dummy;

    for (int i = 0; i < outList.size(); ++i)
    {
        ListNode * node = new ListNode(outList[i]);
        curr->next=node;
        curr=curr->next;

    }
    return dummy->next;
    }
};
