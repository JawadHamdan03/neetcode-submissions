"""
# Definition for a Node.
class Node:
    def __init__(self, x: int, next: 'Node' = None, random: 'Node' = None):
        self.val = int(x)
        self.next = next
        self.random = random
"""
class Solution:
    def copyRandomList(self, head: 'Optional[Node]') -> 'Optional[Node]':
        p = head
        map = {}
        while p :
            map[p]=Node(p.val)
            p =p.next
        p= head

        while p :
            copy=map[p]
            copy.next = map.get(p.next)
            copy.random=map.get(p.random)
            p=p.next
        return map.get(head)