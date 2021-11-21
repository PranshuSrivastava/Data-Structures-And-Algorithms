#include <bits/stdc++.h>
using namespace std;
long marcsCakewalk(vector<int> calorie)
{
    sort(calorie.begin(), calorie.end(), greater<int>());
    int n = calorie.size();
    long long sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += calorie[i] * pow(2, i);
    }
    return sum;
}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);
    int n;
    cin>>n;
    vector<int> calorie(n);
    for(int i=0;i<n;i++)
    cin>>calorie[i];
    cout<<marcsCakewalk(calorie);
    return 0;
}