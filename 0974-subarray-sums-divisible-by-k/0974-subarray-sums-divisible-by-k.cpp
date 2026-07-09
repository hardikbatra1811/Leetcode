class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        unordered_map<int,int> map{{0,1}};
        int count = 0, curr_sum = 0;
        for(int i : nums){
            curr_sum += i;
            int find = ((curr_sum % k) + k)%k;
            if(map.count(find)){
                count += map[find];
            }
            map[find]++;
        }
        return count;
        
    }
};