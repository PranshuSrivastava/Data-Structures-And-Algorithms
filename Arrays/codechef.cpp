#include <bits/stdc++.h>
using namespace std;

int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif
    

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    long long t;
    cin >> t;

    while (t--)
    {
        long long n, m;
        cin >> n >> m;
        int count=0;
        long long sum = 2;
       
        for (int i = 2; i <= n; i++)
        {
            if (m % i == 0)
                count++;
        }
        sum+=(count*(count-1))/2;
        cout << sum << '\n';
    }

    return 0;
}