class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<char> res;
        int bal = 0;
        for ( char ch : s) {
            if ( ch == '('){
                bal++;
            } else if ( ch == ')'){
                if ( bal == 0 ) continue;
                bal--;
            }
            res.push(ch);
        }
        string temp = "";
        for( stack<char>i = res;!i.empty();i.pop())
            temp += i.top();
        string ans = "";
        for ( int i = 0; i < temp.size(); i++){
            if(temp[i] == '(' && bal-- > 0) continue;
            ans += temp[i];
        } 
        reverse(ans.begin(),ans.end());
        return ans;
    }
};