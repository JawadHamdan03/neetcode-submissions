class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int , int> mp;
    for (int i : nums)
    {
        if (mp.contains(i))
            mp[i]++;
        else
            mp[i]=1;
    }

    vector<pair<int,int>> tmp;
    for (auto it : mp)
        tmp.push_back(it);

    sort(tmp.begin(),tmp.end(),[](pair<int,int>p1,pair<int,int>p2)
    {
        return p1.second>p2.second;
    });
    vector<int>res;
    for (int i = 0; i < k; ++i)
    {
        res.push_back(tmp[i].first);
    }

    return res;
    }
};
