class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        long long n=x,rev=0;
        while(n!=0)
        {
            int a=n%10;
            rev=rev*10+a;
            n/=10;
        }
        if(rev==x)
            return true;
        else 
            return false;
        
    }
};