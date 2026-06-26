public class Solution {
    public int Trap(int[] height) {
        int left = 0;
        int right = height.Length-1;

        int total = 0;

        int leftMax=height[0];
        int rightMax = height[right];

        while(left<right){
            if(height[left]<height[right]){
                leftMax = Math.Max(leftMax,height[left]);
                if(leftMax - height[left]>0)
                            total+=leftMax - height[left];

                left++;
            }

            else{
                rightMax= Math.Max(rightMax,height[right]);
                if(rightMax-height[right]>0) 
                        total+=rightMax-height[right];

                right--;
            }


        }
        return total;
    }
}
