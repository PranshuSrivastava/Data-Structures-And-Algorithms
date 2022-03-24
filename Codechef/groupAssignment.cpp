#include <bits/stdc++.h>
#define ll long long int
#define pb pop_back
#define yes cout<<"YES"<<'\n';
#define no cout<<"NO"<<'\n';
#define vi vector<int>
#define mi unordered_map<int,int>
#define nline cout<<'\n';
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()

using namespace std;

void solve(){
    int n,x;
    cin>>n>>x;
    int total = n*2;
    cout<<total-x+1;nline;
}

int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int t;
    cin>>t;
    while(t--){
    solve();
    }
    return 0;
}