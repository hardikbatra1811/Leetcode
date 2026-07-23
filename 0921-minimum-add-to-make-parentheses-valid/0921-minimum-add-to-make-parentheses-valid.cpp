class Solution {
public:
    int minAddToMakeValid(string s) {
        int bal = 0, res = 0;
        for ( char ch : s){
            if(ch == '(')
                bal++;
                else {
                    if ( bal == 0 ){
                        res++;
                    } else bal--;
                }
        }
        return res + bal;
    }
};