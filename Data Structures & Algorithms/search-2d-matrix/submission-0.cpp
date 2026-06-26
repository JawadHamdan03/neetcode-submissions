class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
         int l,r,mid;
  for (int i = 0; i < matrix.size(); ++i)
  {
    if (target>matrix[i].back()) continue;

    l=0;
    r=matrix[i].size()-1;
    while (l<=r)
    {
      mid=(l+r)/2;
      if (matrix[i][mid]==target) return true;
      if (matrix[i][mid]>target) r=mid-1;
      else l=mid+1;
    }
  }
  return false;
    }
};
