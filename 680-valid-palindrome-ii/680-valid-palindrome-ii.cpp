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
    bool isPalindrome(string s, int i, int j){
        while(i<j){
            if(s[i]!=s[j])
            return 0;
            else{
                ++i;
                --j;
            }
        }
        return 1;
    }
    bool validPalindrome(string s) {
        int count = 0;
        int i = 0, j = lt(s) - 1;
        while(i<j){
            if(s[i]!=s[j])
            {
                return isPalindrome(s,i+1, j) or isPalindrome(s,i,j-1);
            }
            else{
                ++i;--j;
            }
        }
        return 1;
    }

};
