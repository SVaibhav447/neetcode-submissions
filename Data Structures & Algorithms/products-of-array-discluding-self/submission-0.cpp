class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
          int n = nums.size();

    vector<int> prefixprd(n);
    vector<int> suffixprd(n);

    prefixprd[0] = 1;

    for(int i = 1; i < n; i++) {
        prefixprd[i] = prefixprd[i-1] * nums[i-1];
    }

    suffixprd[n-1] = 1;

    for(int i = n-2; i >= 0; i--) {
        suffixprd[i] = suffixprd[i+1] * nums[i+1];
    }

    vector<int> ans(n);

    for(int i = 0; i < n; i++) {
        ans[i] = prefixprd[i] * suffixprd[i];
    }

    return ans;
}
    
};
