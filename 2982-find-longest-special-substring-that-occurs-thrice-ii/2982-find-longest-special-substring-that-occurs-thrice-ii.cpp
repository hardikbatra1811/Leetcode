class Solution {
public:
    int& minVal(int& a,int& b, int& c){
        if(a <= b &&  a <= c) return a;
        else if(b <= a &&  b <= c) return b;
        else return c;

    }
    int maximumLength(string s) {
        int maxlen = -1;
        int curr_len = 0;
        char prev = '*';
        vector<vector<int>> map(26,vector<int>(3,-1));
        for ( char ch : s){
            int ind = ch - 'a';
            curr_len = (prev == ch) ? curr_len+1 : 1;
            prev = ch;

            int& mini = minVal(map[ind][0], map[ind][1], map[ind][2]);
            if(curr_len > mini){
                mini = curr_len;
            }
        }
        for(int i = 0; i < 26 ; i++){
            int temp = min({map[i][0], map[i][1], map[i][2]});
            maxlen = max(maxlen,temp);
        }
        return maxlen;
    }
};