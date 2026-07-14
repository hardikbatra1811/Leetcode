class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m = mat.size() , n = mat[0].size();
        int i = 0, j = n-1;
        while(j >= 0 && i < m){
            if(mat[i][j] == target) return true;
            if(mat[i][j] > target){
                j--;
            } else {
                i++;
            }
        }
        return false;
    }
};