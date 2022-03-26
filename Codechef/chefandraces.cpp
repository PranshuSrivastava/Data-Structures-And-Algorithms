#include <bits/stdc++.h>
#define ll long long int
#define pb pop_back
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
#define sz(x) (int)x.size()
#define lt(x) (int)x.length()
#define vvi vector<vi>;

using namespace std;

void solve() {
	int x, y, a, b;
	cin >> x >> y >> a >> b;
	int count = 0;
	count += x != a && x != b ? 1 : 0;
	count += y != a && y != b ? 1 : 0;
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