class Solution {
public:
    int trap(vector<int>& height) {
        int total = 0;
        int leftMax[height.size()];
        leftMax[0] = height[0];
        for(int i = 1; i<height.size(); i++ ){
            leftMax[i] = max(height[i], leftMax[i-1]);
        }
        int rightMax[height.size()];
        rightMax[height.size() - 1] = height[height.size() - 1];
        for(int i = height.size() - 2; i>=0; i--){
            rightMax[i] = max(rightMax[i+1], height[i]);
        }

        for(int i = 0; i<height.size(); i++){
            if(height[i] < leftMax[i] && height[i] < rightMax[i]){
                total += min(leftMax[i], rightMax[i]) - height[i];
            }

        }
        return total;
    }
};