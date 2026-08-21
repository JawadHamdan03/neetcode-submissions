public class Solution {
    public int MaxArea(int[] heights) {
        int maxArea = 0;

    int l = 0;
    int r = heights.Length - 1;

    while (l<r)
    {
        int currArea = (r - l) * Math.Min(heights[l],heights[r]);
        maxArea = Math.Max(maxArea,currArea);

       
        if (heights[l] <= heights[r])
            l++;
        else
            r--;
    }

    return maxArea; 
    }
}
