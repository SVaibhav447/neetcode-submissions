class Solution {
public:
    int trap(vector<int>& height) {
       int l = 0;
       int r = height.size() - 1;
       int leftmax = INT_MIN;
       int rightmax = INT_MIN;
       int total = 0;

        while(l<r){
            leftmax = max(leftmax, height[l]);
            rightmax = max(rightmax, height[r]);
            if(leftmax < rightmax){
                total += leftmax - height[l];
                l++;
            }
            else{
                total += rightmax - height[r];
                r--;
            }

        }
        return total;
    }
};