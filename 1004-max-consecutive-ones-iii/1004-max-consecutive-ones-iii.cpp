class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
    int left = 0, right ,zeros = 0;
    int answer = 0;
    int n = nums.size();
    for( right = 0; right < n; right++){
        if( nums[right] == 0){
            zeros++;
        }
        while(zeros > k){
            if(nums[left] == 0){
                zeros--;
            }
            left++;
        }
        answer = max(answer,right-left+1);
    }
    return answer;
    }
};