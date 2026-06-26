class Solution {
public:
    int longestConsecutive(vector<int>& nums)
    {
        if (nums.empty()) return 0;
        set<int> st;
        for (int num : nums)
            st.insert(num);

        vector<int> temp;
        for (auto it : st)
            temp.push_back(it);


        int count = 1;
        int maxCount = count;

        for (int i = 1; i < temp.size(); i++)
        {
            if (temp[i]  == temp[i - 1]+ 1)
            {
                count++;
                maxCount = max(maxCount, count);
            }
            else count = 1;
        }

        return maxCount;

    }
};