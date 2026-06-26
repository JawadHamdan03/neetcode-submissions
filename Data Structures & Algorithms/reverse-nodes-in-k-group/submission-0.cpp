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
    ListNode* reverseKGroup(ListNode* head, int k) {
     vector<int> nodes;
  ListNode * curr= head;
  while (curr)
  {
    nodes.push_back(curr->val);
    curr=curr->next;
  }

  
  for (int i = 0; i < nodes.size()-k+1; i+=k)
  {
    reverse(nodes.begin()+i,nodes.begin()+i+k);
  }
  ListNode * res= new ListNode(0);
  curr= res;
  for (int n: nodes)
  {
    curr->next= new ListNode(n);
    curr=curr->next;
  }
  return res->next;
    }
};
