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
    bool increasingTriplet(vector<int>& nums) {
        int n = sz(nums);
        if(n<3) return 0;
        int low = INT_MAX, mid = INT_MAX;
        for(int i = 0; i<n ; ++i){
            if(nums[i]>mid) return 1;
            else if(nums[i]<low) low = nums[i];
            else if(nums[i]>low and nums[i]<mid)
            mid = nums[i];
        }
        return 0;
    }
};