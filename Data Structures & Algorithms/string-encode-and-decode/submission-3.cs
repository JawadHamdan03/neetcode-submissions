public class Solution {

    public string Encode(IList<string> strs) {
        string res = "";
        foreach(string str in strs)
        {
            res+=str+'.';
        }
        return res;
    }

    public List<string> Decode(string s) {
        List<string> res= new List<string>();
        string temp="";
        foreach(char c in s)
        {
            if(c=='.')
            {
                res.Add(temp);
                temp="";
            }
            else 
                temp+=c;
        }
        return res;
   }
}
