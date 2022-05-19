/*
 * @lc app=leetcode id=46 lang=cpp
 *
 * [46] Permutations
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
    vector<vector<int>> permute(vector<int>& nums) {
        vvi res;
        vi ans;
        dfs(nums, 0, ans, res);
        return res;
    }
    void dfs(vi& nums, int idx, vi& ans, vvi& res){
        if(idx == sz(nums)){
            res.pb(ans);
            return;
        }
        for(int i = 0; i<sz(nums); ++i){
            ans.pb(nums[i]);
            dfs(nums, idx+1, ans, res);
            ans.pop_back();
        }
    }
};
// @lc code=end
