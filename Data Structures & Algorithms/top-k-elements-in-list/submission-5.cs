public class Solution {
    public int[] TopKFrequent(int[] nums, int k) {
         Dictionary<int, int> mp = new Dictionary<int, int>();

    foreach (var num in  nums)
    {
        if (mp.ContainsKey(num))
        {
            mp[num]++;
        }
        else mp[num] = 1;
    }


    List<KeyValuePair<int, int>> mpList = new List<KeyValuePair<int, int>>();

    foreach (var it in mp)
    {
        mpList.Add(it);
    }
    
    mpList.Sort((x, y) => x.Value.CompareTo(y.Value));

    var res = new List<int>();
    for (int i = mpList.Count - 1; i >= 0 && k > 0; i-- ,k--)
    {
        res.Add(mpList[i].Key);
    }

    return res.ToArray();
    }
}
