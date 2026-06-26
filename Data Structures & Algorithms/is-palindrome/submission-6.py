class Solution:
    def isPalindrome(self, s: str) -> bool:
        s = s.strip().lower().replace(' ', "")
        temp = ""
        for c in s:
            if (c >= 'a' and c <= 'z') or (c >= '0' and c <= '9'):
                temp += c

        s = temp
        l = 0
        r = len(s)-1
        while l < r:
            if s[l] != s[r]:
                return False
            else:
                l += 1
                r -= 1

        return True
