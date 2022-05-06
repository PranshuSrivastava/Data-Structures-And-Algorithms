/*
 * @lc app=leetcode id=17 lang=cpp
 *
 * [17] Letter Combinations of a Phone Number
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
    vector<string> letterCombinations(string digits) {
        vs ans;
        if(!digits.size())
        return ans;
        vs m{"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"};
        string path = "";
        dfs(digits, 0, path, ans, m);
        return ans;

    }
    void dfs(string digits, int pos, string path,vs& ans, vs m){

        if(pos == sz(digits)){
            ans.push_back(path);
            return;
        }

        for(auto c: m[digits[pos]-'0']){
            path.push_back(c);
            dfs(digits,pos+1,path,ans,m);
            path.pop_back();
        }

    }
};
// @lc code=end

