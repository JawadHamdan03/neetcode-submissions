class Solution:
    def hasCycle(self, head: Optional[ListNode]) -> bool:
        set =[]
        curr = head
        while curr :
            if curr.next in set :
                return True
            set.append(curr)
            curr=curr.next
        return False