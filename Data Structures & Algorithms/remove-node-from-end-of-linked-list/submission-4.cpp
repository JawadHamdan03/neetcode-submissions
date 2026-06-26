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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode * curr =head;
    ListNode * dummy =new ListNode();
    dummy->next=head;

    int length =0;
    while (curr)
    {
        length++;
        curr=curr->next;
    }
    int rmIndex= length -n;
    ListNode * prev =dummy;
    curr=head;
    int i =0;
    while (curr->next)
    {
        if (i==rmIndex)
            break;
        i++;
        prev=curr;
        curr=curr->next;
    }

    prev->next=curr->next;
    delete curr;
    return dummy->next;
    }
};
