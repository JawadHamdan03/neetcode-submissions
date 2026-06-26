public class Solution {
    public int MaxProfit(int[] prices) {
         int buyValue = prices[0];
 int maxProfit = 0;
 for (global::System.Int32 i = 0; i < prices.Length; i++)
 {
     if (prices[i] < buyValue) buyValue=prices[i];

     if ((prices[i] - buyValue) > maxProfit) maxProfit = (prices[i] - buyValue);
     
 }

 return maxProfit;
    }
}
