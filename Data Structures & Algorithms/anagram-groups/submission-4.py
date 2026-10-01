class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        
        mp= dict()
        for str in strs:
            sorted_str=''.join(sorted(str))
            if sorted_str not in mp:
                mp[sorted_str]=[str]
            else :
                mp[sorted_str].append(str)

        res = []
        for k,v in mp.items():
            res.append(v)

        return res