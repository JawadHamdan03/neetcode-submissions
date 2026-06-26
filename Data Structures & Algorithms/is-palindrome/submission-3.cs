public class Solution {
    public bool IsPalindrome(string str) {
          str = str.ToLower();
   var cleaned = new List<char>();

   foreach (char c in str)
   {
       if (char.IsLetterOrDigit(c))
       {
           cleaned.Add(c);
       }
   }

   int i = 0;
   int j = cleaned.Count - 1;

   while (i < j)
   {
       if (cleaned[i] != cleaned[j])
           return false;

       i++;
       j--;
   }

   return true;
    }
}
