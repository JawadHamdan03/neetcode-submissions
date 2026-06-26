class Solution {
public:
    int findMin(vector<int> &nums) {
        int l=0;
    int r = nums.size()-1;

    while (l<(r-1))
    {
        int mid = (l+r)/2;
        if (nums[mid]>nums[r])
            l=mid;
       else r=mid;
    }

    return min(nums[l],nums[r]);
    }
};
