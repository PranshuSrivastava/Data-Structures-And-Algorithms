/*
 * @lc app=leetcode id=22 lang=cpp
 *
 * [22] Generate Parentheses
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
    vector<string> result;
    void helper(int open, int close, int n, string curr){
        if(curr.length() == n*2)
        {
            result.pb(curr);
            return;
        }
        if(open<n) helper(open+1,close,n,curr+"(");
        if(close<open) helper(open,close+1,n,curr+")");
    }
    vector<string> generateParenthesis(int n) {
        helper(0,0,n,"");
        return result;
    }
};
// @lc code=end

