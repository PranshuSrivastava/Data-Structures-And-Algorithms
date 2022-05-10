/*
 * @lc app=leetcode id=216 lang=cpp
 *
 * [216] Combination Sum III
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
    vector<vector<int>> combinationSum3(int k, int n)
    {
        vvi res;
        vi ans;
        subsets(k, n, 1, ans, res);
        return res;
    }
    void subsets(int k, int n, int idx, vi &ans, vvi &res)
    {
        if(n<0 or sz(ans)>k)
        return;
        if(n==0 and sz(ans)==k){
            res.pb(ans);
            return;
        }
        for (int i = idx; i <= 9; ++i)
        {
            ans.pb(i);
            subsets(k, n-i, i + 1, ans, res);
            ans.pop_back();
        }
        return;
    }
};
// @lc code=end
