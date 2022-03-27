#include <bits/stdc++.h>
#define ll long long int
#define pb push_back
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
#define mod 1e9+7
using namespace std;
class Solution {
public:
    double average(vector<int>& salary) {
        double avg = 0;
        int maxi = *max_element(all(salary));
        int mini = *min_element(all(salary));
        ll check=0;
        for(int i : salary){
            if(i==mini || i==maxi)
            check++;

        }
        for (size_t i = 0; i < sz(salary); ++i)
        {
            if(salary[i]!=maxi && salary[i]!=mini)
            avg+=salary[i];
        }
        double ans = avg/(sz(salary)-2);
        return ans;
    }
};