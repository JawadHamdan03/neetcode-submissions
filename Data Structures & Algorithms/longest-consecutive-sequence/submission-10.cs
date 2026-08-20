public class Solution {
    public int LongestConsecutive(int[] arr) {
        HashSet<int> hst = new HashSet<int>(arr);

    int maxCount = 0 ;
    foreach (var item in hst)
    {
        int currCount = 1;
        
        if (!hst.Contains(item-1))
        {
            int curr = item;
            while (hst.Contains(curr+1))
            {
                currCount++;
                curr = curr + 1;
            }    
        }
        

        maxCount = Math.Max(maxCount,currCount);
    }

    return maxCount;
    }
}
