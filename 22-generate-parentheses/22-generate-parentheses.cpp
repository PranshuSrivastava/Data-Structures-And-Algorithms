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
    vector<string> generateParenthesis(int n) {
        string s;
        vector<string> ans;
        dfs(s,ans,n,n);
        return ans;
    }
    void dfs(string s, vs& ans, int l, int r){
        if(l == 0 and r == 0){
            ans.pb(s);
            return;
        }
        if(l){
            s += '(';
            dfs(s, ans, l - 1, r);
            s.pop_back();
        }
        if(r>l){
            s += ')';
            dfs(s, ans, l, r-1);
            s.pop_back();
        }
        return;
    }
};