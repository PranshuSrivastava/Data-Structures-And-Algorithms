#include <bits/stdc++.h>
using namespace std;
void housing(int arr[], int n, int k)
{
    int sum = arr[0], i = 0, j = 1;
    while (j < n && i < j)
    {
        sum += arr[j];
        j++;

        while (sum > k and i < j)
        {
            sum -= arr[i];
            i++;
        }
        if (sum == k)
            cout << i << " " << j - 1 << endl;
    }
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int plots[] = {1, 3, 2, 1, 4, 1, 3, 2, 1, 1};
    int n = sizeof(plots) / sizeof(int);
    int k = 8;
    housing(plots, n, k);

    return 0;
}