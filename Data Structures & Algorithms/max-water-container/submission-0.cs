public class Solution {
    public int MaxArea(int[] height) {
        int area=0;
int max = 0;

int left = 0;
int right = height.Length - 1;

int h;
int w;
while (left<right)
{

    h = Math.Min(height[left], height[right]);
    w = right - left;

    area = h * w;
    max = Math.Max(max,area);

    if (height[right] >= height[left])
        left++;

    else 
        right--;
}
return max;
    }
}
