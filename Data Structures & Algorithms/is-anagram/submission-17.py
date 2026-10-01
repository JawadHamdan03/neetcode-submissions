class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if len(s) != len(t):
            return False
        
        mp = dict()

        for c in s :
            if c in mp:
                mp[c]=mp[c]+1
            else :
                mp[c]=1

        for c in t:
            if c in mp:
                mp[c]=mp[c]-1
            else :
                mp[c]=1

        for k,v in mp.items():
            if v > 0:
                return False
        return True