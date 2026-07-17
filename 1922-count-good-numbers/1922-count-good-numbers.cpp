class Solution {
public:
    int m = 1e9+7;
    long long solve(int x, long long n){
        if(n>0){
            if(x==1)return 1;
            if(n%2==0){
                long long res = solve(x,n/2)%m;
                return (res*res)%m;
            }else{
                long long res = solve(x,n/2)%m;
                return ((res*res%m)*x)%m;
            }
        }
        return 1;
    }

    int countGoodNumbers(long long n) {
        long long res = solve(20,n/2);
        if(n%2==0)return res%m;
        else return (res*5)%m;
        
    }
};