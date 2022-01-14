class Solution {
public:
    double helper(double x,int n)
    {
        if(!n)
            return 1;
        if(n==1)
            return x;
        double ans=helper(x,n/2);
        if(n%2==0)
            return ans*ans;
        return ans*ans*x;
    }
    double myPow(double x, int n) {
        double ans=helper(x,abs(n));
        return (n<0)?1/ans:ans;
        
    }
};