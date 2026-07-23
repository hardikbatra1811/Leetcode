class Solution {
public:
    bool backspaceCompare(string s, string t) {
    stack<char> st;
    stack<char> sta;
    for(char ch1 : s){
        if(ch1 != '#'){
            st.push(ch1);
        } else {
            if(!st.empty()){
                st.pop();
            }
        }
    }
    for(char ch2 : t){
        if(ch2 != '#'){
            sta.push(ch2);
        } else {
            if(!sta.empty()){
                sta.pop();
            }
        }
    }
    while(!st.empty() && !sta.empty()) {
        if (st.top() != sta.top()) {
            return false;
        } 
        st.pop();
        sta.pop();
    }
    return st.empty() && sta.empty();
    }
};