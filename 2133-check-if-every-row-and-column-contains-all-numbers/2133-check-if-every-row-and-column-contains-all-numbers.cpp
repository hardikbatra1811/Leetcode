class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
    int n = matrix.size();
    for (int i = 0; i < n; i++) {
        vector<int> reach(n + 1, 0);
        for (int j = 0; j < n; j++) {
            int temp = matrix[i][j];
            if (temp < 1 || temp > n)return false;
            if (reach[temp] == 1)return false;
            reach[temp] = 1;
            }
        }
        for (int j = 0; j < n; j++) {
            vector<int> reached(n + 1, 0);
            for (int i = 0; i < n; i++) {
                int temp2 = matrix[i][j];
                if (temp2 < 1 || temp2 > n){
                    return false;
                }
                if (reached[temp2] == 1){
                    return false;
                }
                reached[temp2] = 1;
            }
        }
        return true;
    }
};