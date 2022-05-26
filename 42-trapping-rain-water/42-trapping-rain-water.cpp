#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
#define yes cout << "YES" << '\n';
#define no cout << "NO" << '\n';
#define deb(x) cout << #x << "=" << x << endl
#define all(x) x.begin(), x.end()
#define nline cout << '\n';
#define deb2(x, y) cout << #x << "=" << x << "," << #y << "=" << y << endl
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
#define F first
#define S second
typedef unordered_map<int, int> mi;
typedef vector<string> vs;
typedef vector<vs> vvs;
typedef pair<int, int> pii;
typedef pair<ll, ll> pl;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpii;
typedef vector<pl> vpl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
#define mod 1e9 + 7
using namespace std;
class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = sz(height);
        if (!n)
            return 0;
        int leftMax = height[0], rightMax = height[n - 1];
        int ans = 0;
        int l = 0, r = n-1;
        while (l < r)
        {
            if (height[l] < height[r])
            {
                leftMax = max(leftMax, height[l]);
                ans += max(0, leftMax - height[l]);
                ++l;
            }
            else
            {
                ans += max(0, rightMax - height[r]);
                rightMax = max(rightMax, height[r]);
                --r;
            }
        }
        return ans;
    }
};