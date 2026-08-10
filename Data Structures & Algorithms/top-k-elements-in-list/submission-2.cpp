class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> mp;
        vector<int> res;

        for(int x : nums) mp[x]++;

        vector<vector<int>> bucket(nums.size() + 1);

        for (const auto& [key, value] : mp) {
            bucket[value].push_back(key);
        }
        for (int i = bucket.size() - 1; i >= 0 && res.size() < k; i--) {

            for (int x : bucket[i]) {
                res.push_back(x);

                if (res.size() == k)
                    break;
            }
        }

        return res;
    }
};
