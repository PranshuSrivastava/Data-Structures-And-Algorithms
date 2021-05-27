#include <bits/stdc++.h>
using namespace std;
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    // ios_base::sync_with_stdio(NULL);
    // cin.tie(NULL);

    int m, n, s;
    cin >> m >> n >> s;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    int r = 0, c = n - 1;
    while (r < m && c >= 0)
    {
        if (a[r][c] == s)
        {
            cout << a[r][c];
            break;
        }
        else if (a[r][c] > s)
            c--;
        else
            r++;
    }
    return 0;
}