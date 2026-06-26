class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> pref(nums.size() + 1, 1);
        vector<int> post(nums.size() + 1, 1);
        vector<int> res(nums.size(), 1);

        for (int i = 1; i < pref.size(); i++)
        {
            pref[i] = pref[i - 1] * nums[i - 1];
        }

        for (int i = post.size()-2; i >=0; i--)
        {
            post[i] = post[i + 1] * nums[i];
        }

        for (size_t i = 0; i < res.size(); i++)
        {
            res[i] = pref[i] * post[i + 1];
        }
       

        return res;

    }
};
