    #include <bits/stdc++.h>
    using namespace std;
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
    void solve(){
        int x;
        cin>>x;
        if(x>30)
        cout<<"YES"<<'\n';
        else
        cout<<"NO"<<'\n';
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