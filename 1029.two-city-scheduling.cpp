/*
 * @lc app=leetcode id=1029 lang=cpp
 *
 * [1029] Two City Scheduling
 */

// @lc code=start
#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define vi vector<int>
#define mi unordered_map<int,int>
#define nline cout<<'\n';
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
using namespace std;
class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        vi diff;
        int sum = 0;
        for(int i = 0; i<sz(costs); ++i){
            diff.pb(costs[i][1]-costs[i][0]);
            sum+=costs[i][0];
        }
        sort(diff.begin(),diff.end());
        for(int i = 0; i<sz(costs)/2; ++i){
            sum+=diff[i];

        }
        return sum;
    }
};
// @lc code=end

