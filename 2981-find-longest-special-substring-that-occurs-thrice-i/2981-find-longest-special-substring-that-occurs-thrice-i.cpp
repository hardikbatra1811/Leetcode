class Solution {
public:
    int maximumLength(string s) {
        unordered_map<string,int> map;
        for(int i = 0 ; i<s.size(); i++){
            string curr = "";
            for(int j = i;j < s.size(); j++){
                if(s[i] == s[j]){
                    curr = curr + s[j];
                    map[curr]++;
                } else {
                    break;
                }
            }
        }
        int maxlen = -1;
        for( auto [k,v] : map){
            if ( v >= 3){
                maxlen = max(maxlen,(int)k.size());
            }
        }
        return maxlen;
    }
};