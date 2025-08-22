class Solution {
public:
    int maxArea(vector<int>& height) {
        int max = -1;
        int left = 0;
        int right = height.size() - 1;

        while (left != right){
            int x = right - left;
            int y = min(height[left], height[right]);
            int area = x * y;
            if (area > max) max = area;
            (height[left] > height[right]) ? right-- : left++;
        }

        return max;
    }
};