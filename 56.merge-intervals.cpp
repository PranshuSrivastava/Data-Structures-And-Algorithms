/*
 * @lc app=leetcode id=56 lang=cpp
 *
 * [56] Merge Intervals
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
    vector<vector<int>> merge(vector<vector<int>> &intervals)
    {
        if(sz(intervals)<=1)
        return intervals;
        vvi ans;
        sort(all(intervals));
        ans.pb(intervals[0]);
        for (size_t i = 1; i < sz(intervals) ; ++i)
        {
            if(ans.back()[1] >= intervals[i][0])
            ans.back()[1] = max(ans.back()[1],intervals[i][1]);
            else
            ans.pb(intervals[i]);
        }
        return ans;
    }
};
// @lc code=end
