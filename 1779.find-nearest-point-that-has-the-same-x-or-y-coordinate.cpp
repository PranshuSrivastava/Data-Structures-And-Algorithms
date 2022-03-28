/*
 * @lc app=leetcode id=1779 lang=cpp
 *
 * [1779] Find Nearest Point That Has the Same X or Y Coordinate
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
    int nearestValidPoint(int x, int y, vector<vector<int>> &points)
    {
        int ans, curr, mini = INT_MAX;
        for (int i = 0; i < sz(points); ++i)
        {
            curr = INT_MAX;
            if (points[i][0] == x || points[i][1] == y)
            {
                curr = abs(points[i][0] - x) + abs(points[i][1] - y);
            }
            if(curr<mini){
                mini = min(curr,mini);
                ans = i;
            }
        }
        if(mini == INT_MAX)
        return -1;
        return ans;
    }
};
// @lc code=end
