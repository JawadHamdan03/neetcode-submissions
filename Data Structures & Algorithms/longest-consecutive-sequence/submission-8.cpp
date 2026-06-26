class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
         if(nums.size() <= 1)
        return nums.size();
    set<int> st;
    for(int i : nums) st.insert(i);
    int res = 1;
    for(int i : st){
        int temp = 1;
        if(!st.contains(i-1)){
            int j = i;
            while(st.contains(j+1)){
                j = j + 1;
                temp++;
            }
        }
        res = max(res , temp);
    }
    return res;
    }
};
