class Solution {
public:
    bool isAnagram(string s, string t) {
         if (s.size()!=t.size())
        return false;
    map<char, int> mp1;
    map<char, int> mp2;

    for (char c : s)
    {
        if (!mp1.contains(c))
            mp1[c]=1;
        else
            mp1[c]++;
    }

    for (char c : t)
    {
        if (!mp2.contains(c))
            mp2[c]=1;
        else
            mp2[c]++;
    }

    for (auto [c,v] : mp1)
    {
        if (mp1[c]!=mp2[c])
            return false;
    }

    return true;
    }
};
