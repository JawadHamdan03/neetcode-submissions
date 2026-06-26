class Solution {
public:
   string minWindow(string s, string t)
{
  if (t.empty()) return "";
  unordered_map<char, int> countT;

  for (char c : t)
  {
    countT[c]++;
  }

  int minWin=INT_MAX;
  int have=0,need=countT.size();
  unordered_map<char,int> countWin;
  int resLen=INT_MAX;
  pair<int,int> res{-1,-1};
  int l=0;
  for (int r = 0; r < s.length(); ++r)
  {
    char c= s[r];
    countWin[c]++;
    if (countT.count(c) && countWin[c] == countT[c])
      have++;

    while (have==need)
    {
      if ((r-l+1) < resLen)
      {
        res={l,r};
        resLen=r-l+1;
      }

      countWin[s[l]]--;
      if (countT.count(s[l]) && countWin[s[l]] < countT[s[l]]) have--;
      l++;
    }
  }
  return resLen==INT_MAX? "":s.substr(res.first,resLen);
}
};
