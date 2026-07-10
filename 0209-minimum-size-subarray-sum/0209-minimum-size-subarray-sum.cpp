class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int left = 0, right = 0,  state = 0;
        int mini = INT_MAX;
        while(right < nums.size()){
            state = state + nums[right];
            while(state >= target){
                mini = min(mini,right-left+1);
                state = state - nums[left];
                left++;
            }
            right++;
        } if(mini == INT_MAX) {
            return 0;
        }
        return mini;
    }
};