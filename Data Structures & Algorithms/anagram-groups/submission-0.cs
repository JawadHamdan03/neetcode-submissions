public class Solution {

    public List<List<string>> GroupAnagrams(string[] strs) {
       
         // sort each string in strs and then map them to a HashMap

 Dictionary<string , List<string> > set = new Dictionary<string, List<string>>();

foreach(string s in strs)
 {
     char[] charArr = s.ToCharArray();
     Array.Sort(charArr);
     string sortedString = new string(charArr);

     if (!set.ContainsKey(sortedString))
             set[sortedString] = new List<string>();

     set[sortedString].Add(s);
         

     
 }

 return set.Values.ToList<List<string>>();
    }
}
