/*
 * @lc app=leetcode id=15 lang=cpp
 *
 * [15] 3Sum
 */

// @lc code=start
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define mi unordered_map<int,int>
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
typedef  vector<int> vi;
#define vl vector<ll>;
#define vpii vector<pii>;
#define vs vector<string>;
#define vvs vector<vs>;
#define nline cout<<'\n';
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
typedef vector<vi> vvi;
#define F first
#define S second
using namespace std;
class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        sort(all(nums));
        vvi res;
        for (size_t i = 0; i < sz(nums); i++)
        {
            int target = -nums[i];
            int front = i+1;
            int back = sz(nums)-1;
            while(front<back){
                int sum = nums[front]+nums[back];
                if(sum<target)
                front++;
                else if(sum>target)
                back--;
                else{
                    vi triplet = {nums[i],nums[front],nums[back]};
                    res.pb(triplet);
                    while(front<back && nums[front] == triplet[1])
                    front++;
                    while(front<back && nums[back] == triplet[2])
                    back--;
                }
                while(i+1<sz(nums) && nums[i+1]==nums[i])
                i++;


            }
        }
        return res;

    }
};
// @lc code=end

