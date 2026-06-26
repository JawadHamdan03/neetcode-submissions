public class Solution {
    public bool IsAnagram(string s, string t) {
     
        if (s.Length != t.Length) return false;

        int[] charsCounter = new int[26];

        for (int i = 0; i < s.Length; i++)
        {
            charsCounter[s[i] - 'a']++;
            charsCounter[t[i] - 'a']--;
        }

        foreach (int item in charsCounter)
        {
            if (item != 0) return false;
        }
        return true;
}
    }

