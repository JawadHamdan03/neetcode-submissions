class Solution {
public:
    bool isAnagram(string s, string t) {
        vector<int> countChars(26,0);

        for (char c : s)
        {
            countChars[c - 'a']++;
        }

        for (char c : t)
        {
            countChars[c - 'a']--;
        }

        for (int i : countChars)
            if (i != 0) return false;

        return true;
    }
};
