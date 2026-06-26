public class Solution
{
    public List<List<string>> GroupAnagrams(string[] strs)
    {
        Dictionary<string,List<string>> mp = new Dictionary<string, List<string>>();
        foreach (var str in strs)
        {

            char[] chars = str.ToCharArray();
            Array.Sort(chars);
            string temp= new string(chars);

            if (mp.ContainsKey(temp))
            {
                mp[temp].Add(str);
            }
            else mp[temp] = new List<string>() { str};
        }

        List<List<string>> res= new List<List<string>>();
        foreach (var it in mp)
        {
            res.Add(it.Value);
        }
        return res;
    }
}