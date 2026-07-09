class Solution {
public:
    bool isMiddleElementUnique(vector<int>& nums) {
        int n = nums.size();
        map<int,int> m;
        for( auto i : nums ){
            m[i]++;
        }
        for( auto &p : m){
            if(p.first == nums[n/2]){
                if(p.second == 1){
                    return true;
                }
            }
        }
        return false;
    }
};