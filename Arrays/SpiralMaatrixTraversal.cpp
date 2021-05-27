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
    cin >> m >> n;
    int a[m][n];
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
            cin >> a[i][j];
    }
    int row_start = 0, row_end = m - 1, column_start = 0, column_end = n - 1;
    while (row_start <= row_end && column_start <= column_end)
    {
        //upper row
        for (int i = column_start; i <= column_end; i++)
        {
            cout << a[row_start][i] << " ";
        }
        row_start++;
        //right column
        for (int i = row_start; i <= row_end; i++)
        {
            cout << a[i][column_end] << " ";
        }

        column_end--;
        //lower row
        for (int i = column_end; i >= column_start; i--)
        {
            cout << a[row_end][i] << " ";
        }

        row_end--;
        //left column
        for (int i = row_end; i >= row_start; i--)
        {
            cout << a[i][column_start] << " ";
        }

        column_start++;
    }
    return 0;
}