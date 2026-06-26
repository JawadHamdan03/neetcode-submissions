class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
        if (nums.empty()) return {};

  vector<int> res;
  for (int i = 0; i <= nums.size()-k; ++i)
  {
    int maxV= nums[i];
    for (int j = i; j < i+k; ++j)
    {
      maxV=max(maxV,nums[j]);
    }
    res.push_back(maxV);
  }
  return res;
    }
};
