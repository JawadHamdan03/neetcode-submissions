class Solution:
    def reverseList(self, head: Optional[ListNode]) -> Optional[ListNode]:
        temp = head
        nodes_list =[None]
        while temp != None:
            nodes_list.append(temp)
            temp=temp.next

        for i in range(1,len(nodes_list)):
            nodes_list[i].next=nodes_list[i-1]
        return nodes_list[-1]