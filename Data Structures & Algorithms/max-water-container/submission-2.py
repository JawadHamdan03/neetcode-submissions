class Solution:
    def maxArea(self, heights: List[int]) -> int:
        l = 0
        r = len(heights)-1

        maxSum = 0
        while l < r:
            currSum = (r-l)*min(heights[l], heights[r])
            maxSum = max(currSum, maxSum)
            if heights[r] >= heights[l]:
                l += 1
            else:
                r -= 1

        return maxSum
