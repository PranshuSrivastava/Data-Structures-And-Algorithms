#include <bits/stdc++.h>
using namespace std;
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
void solve()
{
    string a, b;
    cin >> a >> b;
    int n;
    cin >> n;
    vs children(n);
    for (int i = 0; i < n; ++i)
    {
        string a;
        cin>>a;
        children.pb(a);
    }
    string parents = a + b;
    unordered_map<char,int> m;
    for (char c : parents){
        ++m[c];
    }
    for (size_t i = 0; i < sz(children); i++)
    {
        for (size_t j = 0; j < lt(children[i]); ++j)
        {
            if(m[children[i][j]])
            m[children[i][j]]--;
            else
            {
                cout<<"NO";nline;
                return;
            }
        }

    }
    cout<<"YES";nline;


}

int main()
{


    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
        
    }
    return 0;
}