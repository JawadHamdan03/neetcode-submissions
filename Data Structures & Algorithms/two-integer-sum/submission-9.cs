public class Solution {
    public int[] TwoSum(int[] nums, int target) {
  // using HashMap to store the numbers we have seen

  Dictionary<int , int > map = new Dictionary<int, int>();

  for (global::System.Int32 i = 0; i < nums.Length; i++)
  {
      int temp = nums[i];
      if (map.ContainsKey(target - temp))
      {
          return new int[] { map[target - temp], i};
      }
      map.Add(nums[i],i);
  }

  return null;
    }
}
