

using namespace std;

void solve() {
	int s;
	cin >> s;
	int y = -1;
	int x = s - y;
	cout << x*y;
	cout << "ok";
	nline;
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