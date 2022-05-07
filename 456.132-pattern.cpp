/*
 * @lc app=leetcode id=456 lang=cpp
 *
 * [456] 132 Pattern
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
    bool find132pattern(vector<int> &nums)
    {
        if (!sz(nums))
            return 0;

        int n = sz(nums);
        vi minval(n);
        minval[0] = nums[0];
        for (size_t i = 1; i < n; ++i)
        {
            minval[i] = min(minval[i - 1], nums[i]);
        }
        stack<int> st;
        for (int j = n - 1; j > 0; --j)
        {
            while (!st.empty() and nums[st.top()] < nums[j])
            {
                if (nums[st.top()] > minval[j - 1])
                    return 1;
                st.pop();
            }
            st.push(j);
        }
        return 0;
    }
};
// @lc code=end
