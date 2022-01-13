class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n<=0)
            return 0;
        if(n==1)
            return 1;
        return (n&(n-1))==0;
        
        
    }
};