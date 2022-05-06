/*
 * @lc app=leetcode id=1209 lang=cpp
 *
 * [1209] Remove All Adjacent Duplicates in String II
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
    string removeDuplicates(string s, int k) {
        stack< pair<char, int>> st;
        for (size_t i = 0; i < lt(s); ++i)
        {
            if(st.empty() or (st.top().F != s[i]))
            st.push({s[i],1});
            else{
                auto prev = st.top();
                st.pop();
                st.push({s[i],prev.S+1});
            }
            if(st.top().S == k)
            st.pop();
        }
        string ans = "";
        cout<<st.empty();
        while(!st.empty()){
            auto curr = st.top();
            st.pop();
            while(curr.S--){
                ans.pb(curr.F);
            }
        }
        if(!ans.empty())
        reverse(all(ans));
        return ans;


    }
};
// @lc code=end

