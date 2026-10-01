class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = dict()

        for i in range(0,len(nums)):
            if target-nums[i] in mp:
                return [mp[target-nums[i]],i]
            mp[nums[i]]=i

        return [-1,-1]