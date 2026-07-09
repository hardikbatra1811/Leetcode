class Solution {
public:
    bool isAnagram(string s1, string s2){
        sort(s1.begin(),s1.end());
        sort(s2.begin(),s2.end());
        return s1 == s2;
    }
    bool checkInclusion(string s1, string s2) {
        int n1= s1.size();
        int n2 = s2.size();
        if(n1>n2) return false;
        for(int i=0 ;i<=n2-n1 ;i++){
            string temp = s2.substr(i,n1);
            if(isAnagram(s1,temp)) return true;
        }
        return false;
    }
};