class Solution {
public:
    bool isPalindrome(string s) {
       string str = "";
    for (auto c : s)
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z') || (c >= '0' && c <= '9'))
            str += tolower(c);

    }

    int l = 0;
    int r = str.size() - 1;
    while (l<r)
    {
        if (str[l] != str[r]) return false;

        l++;
        r--;
    }

    return true;
    }
};
