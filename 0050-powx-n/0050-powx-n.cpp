class Solution {
public:
    double myPow(double x, long long n) {
        if(n == 0) return 1;
        if(n < 0) return myPow(1.0/x, -n);
        double answer = myPow(x,n/2);
        if ( n % 2 == 0){
            return answer*answer;
        } else {
            return x*answer*answer;
        }
    }
};