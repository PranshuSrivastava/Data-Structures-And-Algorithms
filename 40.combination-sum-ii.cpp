/*
 * @lc app=leetcode id=40 lang=cpp
 *
 * [40] Combination Sum II
 */

// @lc code=start
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define nline cout<<'\n';
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
#define F first
#define S second
typedef unordered_map<int,int> mi;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef pair<int, int>  pii;
typedef pair<ll, ll>    pl;
typedef vector<int>     vi;
typedef vector<ll>      vl;
typedef vector<pii>     vpii;
typedef vector<pl>      vpl;
typedef vector<vi>      vvi;
typedef vector<vl>      vvl;
#define mod 1e9+7
using namespace std;
class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vvi res;
        vi ans;
        subsets(candidates, target, 0, ans, res);
        return res;

    }
    void subsets(vi& candidates, int target, int idx, vi& ans, vvi& res){

        if( target==0)
        {
            res.pb(ans);
            return;
        }
        if(idx == sz(candidates) or target<0)
        return;
        for (size_t i = idx; i < sz(candidates); ++i)
        {
            ans.pb(candidates[i]);
            subsets(candidates, target-candidates[i], i+1, ans, res);
            ans.pop_back();
        }

    }
};
// @lc code=end

