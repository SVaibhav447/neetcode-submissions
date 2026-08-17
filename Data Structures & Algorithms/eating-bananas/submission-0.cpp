class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int high = *max_element(piles.begin(), piles.end());
        int low = 1;
        int res = high;

        while(low <= high){
            int mid = low + (high - low)/2;

            long long hours = 0;
                for (int pile : piles) {
                    hours += (long long)(pile + mid - 1) / mid;
                        }
            if(hours <= h) {
                res = mid;
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }

        }
        return res;
        
    }
};
