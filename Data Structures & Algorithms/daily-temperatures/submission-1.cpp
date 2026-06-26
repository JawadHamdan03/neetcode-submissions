class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
       vector<int> result(temperatures.size(),0);
  stack<pair<int,int>> st;
  st.push({temperatures[0],0});
  for (int i = 1; i < temperatures.size(); ++i)
  {
    while (temperatures[i]>st.top().first)
    {
      result[st.top().second]=i-st.top().second;
      st.pop();
      if (st.empty()) break;
    }
    st.push({temperatures[i],i});

  }
  return result;
    }
};
