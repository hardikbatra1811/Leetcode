class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();
        for ( int i = 0; i < n; i++){
            for ( int j = i; j < n; j++){
                int temp = matrix[i][j];
                matrix[i][j] = matrix[j][i];
                matrix[j][i] = temp;
            }
        }

        for(auto& i : matrix){
            reverse(i.begin() , i.end());
        }
    }
};