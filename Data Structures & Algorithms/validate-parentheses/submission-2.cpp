class Solution {
public:
    bool isValid(string s) {
         stack<char> st;
  for (int i = 0; i < s.length(); ++i)
  {
    char c = s[i];
    if (!st.empty()&&((c ==')' && st.top()=='(')|| (c ==']' && st.top()=='[')||(c =='}' && st.top()=='{')))
      st.pop();
    else st.push(c);
  }
  return st.empty();
    }
};
