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
class Solution {
public:
    int longestValidParentheses(string s) {
        int left = 0, right = 0, maxi = 0;
        for(char c: s){
            if(c == '(')
                ++left;
            else if(c == ')')
                ++right;
            if(left == right)
                maxi = max(maxi , 2*left);
            else if(right>=left)
            {
                left = 0;
                right = 0;
            }
        }
        
        left = 0, right = 0;
        for(int i = sz(s); i>=0; --i){
            cout<<s[i];
            deb2(left, right);
            if(s[i] == ')')
                ++right;
            if(s[i] == '(')
                ++left;
            if(left == right){
                maxi = max(maxi, 2*right);
            }
            else if(left>=right)
            {
                left = 0, right = 0;
            }
        }
        return maxi;
        
        
    }
};