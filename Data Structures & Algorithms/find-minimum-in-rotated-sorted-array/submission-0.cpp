class Solution {
public:
    int findMin(vector<int> &nums) {
        int minN=nums[0];
        for(auto n : nums) minN=min(minN,n);

        return minN;
    }
};
