/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

class Solution {
public:
    Node* copyRandomList(Node* head) {
       Node * p =head;
  map<Node*,Node*> hashNodes;
  hashNodes[NULL]=NULL;
  while (p)
  {
    Node * newNode= new Node(p->val);
    hashNodes[p]=newNode;
    p=p->next;
  }

  p=head;
  while (p)
  {
    Node * copy=hashNodes[p];
    copy->next=hashNodes[p->next];
    copy->random=hashNodes[p->random];

    p=p->next;
  }
  return hashNodes[head];
    }
};
