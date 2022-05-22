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
    string longestPalindrome(string s) {
        string ans = "" ;
        int maxi = 0;
        for (size_t i = 0; i < lt(s); ++i)
        {
            int l = i, r = i;
            while(l>=0 and r<lt(s) and s[l] == s[r]){
                if((r -l+1 )> maxi){
                    maxi = r-l+1;
                    ans = s.substr(l,r-l+1);
                }
                --l;++r;
            }
            l = i, r = i+1;
            while(l>=0 and r<lt(s) and s[l] == s[r]){
                if((r -l+1 )> maxi){
                    maxi = r-l+1;
                    ans = s.substr(l, r-l+1);
                }
                --l;++r;
            }
        }
        return ans;

    }
};