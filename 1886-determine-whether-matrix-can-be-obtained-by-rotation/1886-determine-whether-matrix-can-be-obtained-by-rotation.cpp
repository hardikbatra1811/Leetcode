class Solution {
public:
    bool findRotation(vector<vector<int>>& mat, vector<vector<int>>& target) {
    vector<bool> res( 4,true);
    int n = mat.size();
        for ( int i = 0; i < mat.size() ; i++){
            for ( int j = 0; j < mat.size() ; j++){
                if(mat[i][j] != target[j][n-1-i]){
                    res[0] = false;
                } if(mat[i][j] != target[n-1-i][n-1-j]){
                    res[1] = false;
                } if(mat[i][j] != target[n-1-j][i]){
                    res[2] = false;
                } if(mat[i][j] != target[i][j]){
                    res[3] = false;
                }
            }    
        }
        return res[0] || res[1] || res[2] || res[3];
    }
};