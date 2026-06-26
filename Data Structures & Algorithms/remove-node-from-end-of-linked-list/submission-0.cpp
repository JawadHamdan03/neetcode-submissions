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
        int size=0;
  ListNode *p=head;
  while (p)
  {
    size++;
    p=p->next;
  }
  if (n==size) return head->next;
  int idx= size-n;

  p=head;
  ListNode * dummy;

  int i=0;
  while (p)
  {
    dummy=p;
    p=p->next;
    i++;
    if (i==idx) break;
  }
 dummy->next=p->next;
  p->next=nullptr;
  return head;
    }
};
