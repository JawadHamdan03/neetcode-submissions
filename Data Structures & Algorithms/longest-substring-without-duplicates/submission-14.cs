public class Solution {
    public int LengthOfLongestSubstring(string s) {
        
    HashSet<int> st = new HashSet<int>();

    int count = 0;
    int maxCount = 0;

    int l = 0;
    for (int r = 0; r < s.Length; r++)
    {
        while (st.Contains(s[r]))
        {
            st.Remove(s[l]);
            l++;
            count--;
        }
        
        st.Add(s[r]);
        count++;
        maxCount = Math.Max(count, maxCount);

    }

    return maxCount;
    }
}
