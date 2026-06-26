class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
       int cols= matrix[0].size();
  int rows= matrix.size();

  int top=0;
  int bot=rows-1;
  int midy;
  while (top<=bot)
  {
    midy=(top+bot)/2;
    if (target>matrix[midy][cols-1]) top=midy+1;
    else if (target<matrix[midy][0]) bot=midy-1;
    else break;
  }

  if (!(top <= bot)) {
    return false;
  }

   int l=0,r=cols-1,mid;
     while (l<=r)
     {
       mid=(l+r)/2;
       if (matrix[midy][mid]==target) return true;
       if (matrix[midy][mid]>target) r=mid-1;
       else l=mid+1;
     }

  return false;
    }
};
