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
#define mod 1e9+7
typedef std :: unordered_map<int, int> mi ;
typedef std :: vector<std :: string> vs;
typedef std :: vector<vs> vvs;
typedef std :: pair<int, int>  pii;
typedef std :: pair<ll, ll>    pl;
typedef std :: vector<int>     vi;
typedef std :: vector<ll>      vl;
typedef std :: vector<pii>     vpii;
typedef std :: vector<pl>      vpl;
typedef std :: vector<vi>      vvi;
typedef std :: vector<vl>      vvl;


using namespace std;

void solve() {
	int n, count = 0;
	string s;
	cin >> n >> s;
	for (int i = 1; i < lt(s); ++i)
	{
		if (s[i] == '0' and s[i - 1] == '0')
			count += 2;
	}
	cout << count; nline;

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
	cin >> t;
	while (t--) {
		solve();
	}
	return 0;
}
f(sz(nums))