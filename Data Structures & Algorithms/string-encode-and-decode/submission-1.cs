public class Solution {

    public string Encode(IList<string> strs) {
         string s="";
        foreach (var item in strs)
             s += item + '.';

        return s;
    }

    public List<string> Decode(string s) {
             string tempS = "";
            List<string> res = new List<string>();
            foreach (char item in s)
            {
                if (item=='.')
                {
                    res.Add(tempS);
                    tempS = "";
                }
                else
                    tempS += item;
            }
            return res;
   }
}
