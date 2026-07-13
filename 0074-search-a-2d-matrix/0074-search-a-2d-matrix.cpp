class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int tar) {
       int r = mat.size() , c = mat[0].size();
       int left = 0, right = r*c-1;
       while(left <= right){
        int mid = ( left + right) /2;
        int i = mid / c;
        int j = mid % c;
        if(mat[i][j] == tar) return true;
        if ( mat[i][j] > tar) right = mid -1;
        else left = mid + 1;
       }
       return false;
    }
};