public class Solution {
    public int LengthOfLongestSubstring(string s) {
          if (s == null | s.Length == 0) return 0;

 if (s.Length <= 1) return s.Length;
 int left = 0;
 int right = 0;
 int ans = 0;

 HashSet<char> set =new HashSet<char>();

 while (right<s.Length)
 {
     char c = s[right];
     while (set.Contains(c))
     {
         set.Remove(s[left]);
         left++;
     }
     set.Add(c);
     ans = Math.Max(ans,right-left+1);
     right++;
 }
 return ans;
    }
}
