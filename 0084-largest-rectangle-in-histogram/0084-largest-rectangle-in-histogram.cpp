class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        int n = h.size();
        // NSE Left Side
        vector<int> l(n,0);
        stack<int> stl;
        for(int i=0;i<n;i++){
            while(stl.size() > 0 && h[stl.top()] >= h[i]){
                stl.pop();
            }
            l[i] = stl.size() == 0 ? -1 : stl.top();
            stl.push(i);
        }
        //NSE right side
        vector<int> r(n,0);
        stack<int> st2;
        for ( int i = n -1 ; i >= 0 ; i--){
            while(st2.size() > 0 && h[st2.top()] >= h[i]){
                st2.pop();
            }
            r[i] = st2.size() == 0 ? n : st2.top();
            st2.push(i);
        }

        int ans = 0;
        for( int i = 0; i < n; i++) {
            int width = r[i] - l[i] -1;
            ans = max(ans,h[i] * width);
        }
        return ans;
    }
};