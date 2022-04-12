/*
 * @lc app=leetcode id=923 lang=cpp
 *
 * [923] 3Sum With Multiplicity
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
using namespace std;
class Solution {
public:
    int threeSumMulti(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        int ans = 0;
        ll mod = 1e9 + 7;
        ll sum ;
        for(int i = 0; i<sz(nums) - 2; ++i){
            int l = i+1;
            int r = sz(nums)-1;
            while(l<r){
                sum = nums[l] + nums[i] + nums[r];
                if(sum == target){
                    int count1 = 1;
                    int count2 = 2;
                    while(l<r and nums[l] == nums[l+1]){
                        ++l;
                        ++count1;
                    }
                    while(l<r and nums[r] == nums[r-1]){
                        --r;
                        ++count2;
                    }
                    if(l == r){
                        ans = (ans%mod + (count1%mod *(count1-1)%mod)/2)%mod;

                    }
                    if(l!=r){
                        ans = (ans%mod + (count1%mod* count2%mod)%mod)%mod;

                    }
                    ++l;
                    --r;
                }
                else{
                    if(sum > target){
                        --r;
                    }
                    else{
                        ++l;
                    }
                }

            }
        }
        return ans;
    }
};
// @lc code=end

