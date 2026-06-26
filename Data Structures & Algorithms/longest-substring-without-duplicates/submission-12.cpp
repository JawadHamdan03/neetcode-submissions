class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       set<char> st;

    int l = 0;
    int maxLength=0;
    int length =0;
    for (int r = 0; r < s.size(); ++r)
    {
        while (st.contains(s[r]))
        {
            st.erase(s[l]);
            l++;
            length--;
        }
        st.insert(s[r]);
        length++;
        maxLength=max(length,maxLength);
    }
    return maxLength;
    }
};
