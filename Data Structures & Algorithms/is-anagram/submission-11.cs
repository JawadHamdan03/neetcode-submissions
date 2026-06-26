public class Solution {
    public bool IsAnagram(string s, string t) {
         // using an array to map the count of each character in the alphabet 
        if (s.Length != t.Length) return false;

        int[] charsCounter = new int[26];

         //increment the count for each char in s
        //decrement the count for each char in t
        for (int i = 0; i < s.Length; i++)
        {
            charsCounter[s[i] - 'a']++;
            charsCounter[t[i] - 'a']--;
        }
        
            //check if all count are zero
        foreach (int item in charsCounter)
        {
            if (item != 0) return false;
        }
        return true;
}
    }

