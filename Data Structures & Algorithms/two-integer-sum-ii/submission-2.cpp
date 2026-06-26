class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l = 0;
        int r = numbers.size()-1;

        
        while(l<r)
        {
            int sum = 0;
            sum=numbers[l]+numbers[r];
            if(sum==target ) return {++l,++r};
            if(sum> target) r--;
            else l++;    
        }

        return {-1,-1};
    }
};
