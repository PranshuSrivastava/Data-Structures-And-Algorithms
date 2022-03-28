/*
 * @lc app=leetcode id=278 lang=cpp
 *
 * [278] First Bad Version
 */

// @lc code=start
// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 0, high = n-1, mid;
        while(low<=high){
            mid = low +(high-low)/2;
            if(isBadVersion(mid))
            high = mid-1;
            else
            low = mid+1;
        }
        return low;

    }
};
// @lc code=end

