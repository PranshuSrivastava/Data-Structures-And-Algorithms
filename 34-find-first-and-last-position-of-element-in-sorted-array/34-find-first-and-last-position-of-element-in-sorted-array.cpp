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
    vector<int> searchRange(vector<int> &nums, int target)
    {
        if (sz(nums) == 0)
            return {-1,-1};
        if(first(nums, target) == 0 and last(nums, target) == 0 and nums[0] != target)
            return {-1,-1};
        return {first(nums, target), last(nums, target)};
    }
    int first(vi &nums, int target)
    {
        int low, high, mid;
        int ans = 0;
        low = 0, high = sz(nums) - 1;
        while (low <= high)
        {
            mid = ((high - low) / 2) + low;
            if (nums[mid] == target)
            {
                ans = mid;
                high = mid - 1;
            }
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return ans;

    }

    int last(vi &nums, int target)
    {
        int low, high, mid;
        int ans = 0;
        low = 0, high = sz(nums) - 1;
        while (low <= high)
        {
            mid = ((high - low) / 2) + low;
            if (nums[mid] == target)
            {
                ans = mid;
                low = mid + 1;
            }
            else if (nums[mid] > target)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return ans;
    }
};