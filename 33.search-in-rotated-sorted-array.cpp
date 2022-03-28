/*
 * @lc app=leetcode id=33 lang=cpp
 *
 * [33] Search in Rotated Sorted Array
 */

// @lc code=start
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define nline cout << '\n';
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
#define F first
#define S second
typedef unordered_map<int, int> mi;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define mod 1e9 + 7
using namespace std;
class Solution
{
public:
    bool search(vector<int> &nums, int target)
    {
        if(nums.empty())
        return -1;
        vi::iterator it;
        it = unique(nums.begin(),nums.end());
        nums.resize(distance(nums.begin(),it));
        int mid, low = 0, high = sz(nums) - 1;
        if (nums[0] < nums.back())
        {
            while (low <= high)
            {
                mid = (low + high) / 2;
                if (nums[mid] == target)
                    return true;
                else if (nums[mid] < target)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            return false;
        }
        if (target >= nums[0])
        {
            while (low <= high)
            {
                mid = ((low+high)/2);
                if (nums[mid] == target)
                    return true;
                else if (nums[mid] >=nums[0] && nums[mid] <target)
                    low = mid + 1;
                else
                    high = mid - 1;
            }
            return false;
        }

        {
            while(low<=high){
                deb2(low,high);
                mid = (high+low)/2;
                deb(mid);
                if(nums[mid] == target)
                return true;
                else if(nums[mid]>=nums[0] || nums[mid]<target)
                low = mid+1;
                else
                high=mid-1;
            }
            return false;
        }
        return false;
    }
};
[11111111113,1,1,1,1,1,1,1,1,1,1,1,1]
13
// @lc code=end
