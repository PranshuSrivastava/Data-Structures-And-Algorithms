/*
 * @lc app=leetcode id=217 lang=cpp
 *
 * [217] Contains Duplicate
 */

// @lc code=start
#include <bits/stdc++.h>
#define ll long long int
#define pb pop_back
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define mi unordered_map<int,int>
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define vi vector<int>;
#define vl vector<ll>;
#define vpii vector<pii>;
#define vs vector<string>;
#define vvs vector<vs>;
#define nline cout<<'\n';
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
#define vvi vector<vi>;
using namespace std;
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        set<int> s(all(nums));
        if(sz(s) == sz(nums) )
        return 0;
        return 1;

    }
};
// @lc code=end

