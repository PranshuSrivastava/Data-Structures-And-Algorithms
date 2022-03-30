/*
 * @lc app=leetcode id=238 lang=cpp
 *
 * [238] Product of Array Except Self
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
    vector<int> productExceptSelf(vector<int>& nums) {

        vi beg(sz(nums),1), end(sz(nums),1);
        for(int i = 1; i<sz(nums); ++i){
            beg[i] = beg[i-1]*nums[i-1];
            end[i] = end[i-1]*nums[sz(nums) -i];
        }
        vi ans(sz(nums));
        for(int i = 0;i<sz(nums); ++i){
            ans[i] = beg[i]*end[sz(nums)-1-i];
        }
        return ans;
    }

};
// @lc code=end

