class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left = 0;
        int right = heights.size() - 1;
        int area = 0;
        int max_area = 0;

        while(left < right){
            area = min(heights[left], heights[right]) * (right - left);
            max_area = max(area, max_area);

            if(heights[left] < heights[right]){
                left++ ;

            }
            else{
                right--;
            }
        }
        return max_area;
    }
};
