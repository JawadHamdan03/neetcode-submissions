public class Solution {
    public bool IsAnagram(string s, string t) {
      if(s.Length != t.Length) return false;

char[] s1=s.ToCharArray();
char[] t1=t.ToCharArray();

Array.Sort(s1);
Array.Sort(t1);

bool flag = false;

for (int i = 0; i < s1.Length; i++)
{ flag = s1[i]==t1[i];
 if (!flag) return false;
}


return flag;
    }
}
