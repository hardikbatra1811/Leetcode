class Solution {
public:
    vector<int> luckyNumbers(vector<vector<int>>& mat) {
        vector<int> res;
       vector<int> rowMin,colMax;
       int m = mat.size(),n=mat[0].size();
       for(int i=0;i<m;i++){
        int tempmin = INT_MAX;
        for(int j =0 ;j<n;j++){
            tempmin = min(tempmin,mat[i][j]);
        }
        rowMin.push_back(tempmin);
       }
        for(int i=0;i<n;i++){
        int tempmax = INT_MIN;
        for(int j =0 ;j<m;j++){
            tempmax = max(tempmax,mat[j][i]);
        }
        colMax.push_back(tempmax);
        }
        for(int i=0;i<m;i++){
            for(int j =0;j<n;j++){
                if(mat[i][j] == rowMin[i] && mat[i][j] == colMax[j])
                    res.push_back(mat[i][j]);
            }
        }
        return res;
    }
};