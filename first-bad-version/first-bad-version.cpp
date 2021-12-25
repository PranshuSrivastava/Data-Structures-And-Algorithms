// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        
        int lb=0,ub=n-1,mid;
        while(lb<=ub)
        {
            mid=lb+(ub-lb)/2;
            if(isBadVersion(mid)==true &&  isBadVersion(mid-1)==false)
                return mid;
            else if(isBadVersion(mid))
                ub=mid-1;
            else 
                lb=mid+1;
        }
        return mid+1;
        
    }
};