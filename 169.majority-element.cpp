/*
 * @lc app=leetcode id=169 lang=cpp
 *
 * [169] Majority Element
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
#define F first
#define S second
using namespace std;
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        //Boyer-Moore Majority Algorithm
        int check = 0,majority;
        for(int i : nums){
            if(!check)
            majority = i;
            check+=majority==i?1:-1;

        }
        return majority;
    }
};
// @lc code=end

