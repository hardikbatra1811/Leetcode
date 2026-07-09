class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n = nums.size();
        int count = 0;
        if( k <= 1) return 0;
        for(int i = 0; i < n; i++){
            double curr_prod = 1;
            for ( int j = i; j<n; j++){
                curr_prod = curr_prod * nums[j];
                if( curr_prod < k){
                    count++;
                } else {
                    break;
                }
            }
        }
        return count;
    }
};