class Solution:
    def removeNthFromEnd(self, head: Optional[ListNode], n: int) -> Optional[ListNode]:
        count =0
        curr = head
        while curr :
            count+=1
            curr=curr.next

        if n==count:
            return head.next
        k= count-n
        i=0
        curr=head
        while i < k-1:
            curr=curr.next
            i+=1

        toDel = curr.next
        curr.next=toDel.next
        del toDel
        return head