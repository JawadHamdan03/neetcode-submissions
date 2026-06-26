public class Solution {
    public int LongestConsecutive(int[] nums) {
       if (nums.Length ==0)
     return 0;

     if (nums.Length == 1)
    return 1;
       
       
        Array.Sort(nums);
 

Dictionary<int, int> map = new Dictionary<int, int>();
   
int seqNum = 1;

for (global::System.Int32 i = 0; i < nums.Length; i++)
{
    

    if (i==0)
        map.Add(seqNum, 1);

   else if (nums[i] - 1 == nums[i - 1])
        map[seqNum]++;
    else if (nums[i] == nums[i - 1]) continue;
    else
    {
        seqNum++;
        map.Add(seqNum, 1);
    }
}


return map.Values.Max();
    }
}
