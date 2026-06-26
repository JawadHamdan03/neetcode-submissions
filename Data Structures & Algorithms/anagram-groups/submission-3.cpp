class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
         map<string,vector<string>> anagrams;
    vector<vector<string>> res;
    for (auto str : strs)
    {
        string temp= str;
        sort(str.begin(),str.end());
        if (anagrams.contains(str))
            anagrams[str].push_back(temp);
        else
            anagrams[str]={temp};
    }
    for (auto [str,arr] : anagrams)
        res.push_back(arr);
    return res;
    }
};
