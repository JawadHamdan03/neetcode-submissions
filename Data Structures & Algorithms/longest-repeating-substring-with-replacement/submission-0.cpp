class Solution {
public:
    int characterReplacement(string s, int k)
{
  if (s.empty())
    return 0;

  int res=0;
  map<char,int> mp;

  int l =0;
  int maxF=0;
  for (int r = 0; r < s.length(); ++r)
  {
    mp[s[r]]++;

    maxF=max(maxF,mp[s[r]]);

    while ((r-l+1)-maxF > k)
    {
      mp[s[l]]--;
      l++;
    }

    res= max(res,r-l+1);
  }

return res;
}
};
