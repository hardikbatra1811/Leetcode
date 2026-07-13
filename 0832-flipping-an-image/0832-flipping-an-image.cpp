class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        for(auto& i : image){
            for( auto& j : i){
                if(j == 0){
                    j = 1;
                } else {
                    j = 0;
                }
            }
            reverse(i.begin(), i.end());
        }
        return image;
    }
};