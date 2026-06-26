class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length()>s2.length()) return false;
        int winSize=s1.length();
  string s1new =s1;
  for (int i = 0; i <= s2.length()-winSize; ++i)
  {
    string temp="";
    for (int j = i; j < i+winSize; ++j)
    {
        temp+=s2[j];
    }
    sort(s1new.begin(),s1new.end());
    sort(temp.begin(),temp.end());
    if (temp==s1new) return true;
    s1new = s1;
  }
  return false;
    }
};
