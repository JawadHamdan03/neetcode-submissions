class Solution {
public:
    string minWindow(string s, string t) {
          if (t.empty()) return "";
        
    unordered_map<char,int> countT, window;

    for (char c : t)
    {
        if (countT.contains(c))
            countT[c]++;
        else
            countT[c]=1;
    }


    int have =0, need = countT.size();
    pair<int,int> res={-1,-1};
    int resLen =INT_MAX;
    int l =0;
    for (int r = 0; r < s.size(); ++r)
    {
        char c = s[r];
        if (window.contains(c))
            window[c]++;
        else
            window[c]=1;

        if (countT.contains(c) and window[c]==countT[c])
            have++;

        while (have ==need)
        {
            if (r-l+1 < resLen)
            {
                res={l,r};
                resLen=r-l+1;
            }
            window[s[l]]--;
            if (countT.contains(s[l]) and window[s[l]]<countT[s[l]])
                have--;
            l++;
        }

    }
    
    l=res.first;
    int r=res.second;
    return resLen == INT_MAX ? "" : s.substr(res.first, resLen);
    }
};
