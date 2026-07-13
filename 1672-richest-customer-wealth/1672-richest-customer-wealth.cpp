class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int wealth = 0;
        for( int i = 0; i < accounts.size(); i++){
        int column_sum = 0;
            for ( int j = 0; j < accounts[0].size() ; j++){
                 column_sum = column_sum + accounts[i][j];

            }
            wealth = max(column_sum,wealth);
        }
        return wealth;
    }
};