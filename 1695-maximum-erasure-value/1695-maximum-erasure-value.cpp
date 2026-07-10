class Solution {
public:
    int maximumUniqueSubarray(vector<int>& s) {
        int left = 0, right = 0, maxi = INT_MIN;
        int wsum =0;
        unordered_set<int> state;
        while(right < s.size()){
            while(state.count(s[right])==1){
                wsum = wsum - s[left];
                state.erase(s[left]);
                left++;
            }
            wsum += s[right];
            state.insert(s[right]);
            maxi = max(maxi,wsum);
            right++;
        }
        return maxi==INT_MIN ? 0 : maxi;
    }
};