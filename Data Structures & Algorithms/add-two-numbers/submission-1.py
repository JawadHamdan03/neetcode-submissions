class Solution:
    def addTwoNumbers(self, l1: Optional[ListNode], l2: Optional[ListNode]) -> Optional[ListNode]:
        curr1 = l1
        curr2= l2
        res =[]
        carry=0
        dummy = ListNode(-1)
        new_head =dummy
        while curr1 or curr2 or carry!=0:
            val1 = curr1.val if curr1 else 0
            val2 = curr2.val if curr2 else 0

            sum=val1+val2+carry
            carry= sum//10
            sum=sum%10
            dummy.next = ListNode(sum)
            curr1=curr1.next if curr1 else None 
            curr2=curr2.next if curr2 else None 
            dummy=dummy.next

            
        return new_head.next