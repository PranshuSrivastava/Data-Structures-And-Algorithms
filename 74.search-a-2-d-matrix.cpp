/*
 * @lc app=leetcode id=74 lang=cpp
 *
 * [74] Search a 2D Matrix
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
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        vi ans;
        for(int i = 0; i<sz(matrix); ++i){
            for(int j = 0; j<sz(matrix[0]); ++j){
                ans.pb(matrix[i][j]);
            }
        }
        int lb = 0, ub = sz(ans)-1, mid;
        while(lb<=ub){
            mid = lb + (ub-lb)/2;
            deb(ans[mid]);
            if(ans[mid]==target)
            return 1;
            else if(ans[mid]<target)
            lb = mid+1;
            else
            ub = mid-1;
        }
        return 0;

    }
};
// @lc code=end

