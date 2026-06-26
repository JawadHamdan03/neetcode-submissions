class Solution {
public:
string encode(vector<string>& strs)
{

    string ret ="";
    for (string str : strs)
        ret+=str+".";
    return ret;
}

vector<string> decode(string s)
{
    vector<string> res;
    string curr_str="";

    for (char c : s)
    {
        if (c=='.')
        {
            res.push_back(curr_str);
            curr_str="";
        }
        else
            curr_str+=c;
    }
    return res;
}
};
