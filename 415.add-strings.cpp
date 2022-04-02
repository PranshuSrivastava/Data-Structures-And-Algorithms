/*
 * @lc app=leetcode id=415 lang=cpp
 *
 * [415] Add Strings
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
    string addStrings(string n1, string n2) {
        int i = 0, maxSize = 1 + (n1.size() > n2.size() ? n1.size() : n2.size()), sum = 0;
        string res(maxSize, '0');
        while (i++ < maxSize) {
            sum = (i <= n1.size() ? n1[n1.size() - i] - 48 : 0) + (i <= n2.size() ? n2[n2.size() - i] - 48 : 0) + sum % 10;
            res[maxSize - i] = sum % 10 + 48;
            sum /= 10;
        }
        if (res[0] == '0') res = res.substr(1);
        return res;
    }
};
// @lc code=end

