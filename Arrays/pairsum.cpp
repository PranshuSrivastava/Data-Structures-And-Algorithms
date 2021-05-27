#include <bits/stdc++.h>
using namespace std;
void pairsum(int arr[], int n, int s)
{
    int high = n - 1, low = 0;
    while (low < high)
    {
        if (arr[low] + arr[high] == s)
        {
            cout << low + 1 << " " << high + 1;
            return;
        }
        else if ((arr[low] + arr[high]) > s)
            high--;
        else
            low++;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n, s;
    cin >> n >> s;
    int a[n];
    for (int i = 0; i < n; i++)
        cin >> a[i];
    pairsum(a, n, s);
    return 0;
}