public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
      Dictionary<int, int> map = new Dictionary<int, int>();
 int[] res = new int[k];
 for (global::System.Int32 i = 0; i < nums.Length; i++)
 {
     if (map.ContainsKey(nums[i]))
         map[nums[i]]++;
     else
         map.Add(nums[i], 1);
 }

 for (global::System.Int32 i = 0; i < k; i++)
 {
     int max = map.Values.Max();
     int index = map.Values.ToList().IndexOf(max);
     int target = map.Keys.ToList().ElementAt(index);
     res[i] = target;
     map.Remove(target);
 }


 return res;
    }
}
