class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
            map<int,int> mp;
    
    for(int i : nums)
    {
        if(mp.contains(i))
        {
            mp[i]++;
        }
        else 
            mp[i]=1;
    }

    vector<pair<int,int>> vec;
    for (auto it : mp)
    {
        vec.push_back(it);
    }

    sort(vec.begin(),vec.end(),[](pair<int,int> a, pair<int,int>b){
        return a.second>b.second;
    });

    vector<int> ret;
    for (int i = 0; i < k; i++)
    {
        ret.push_back(vec[i].first);
    }
    return ret;
    }
};
