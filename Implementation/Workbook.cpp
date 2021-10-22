//Lisa's Workbook. Book problem.
#include <bits/stdc++.h>
using namespace std;
int workbook(int n, int k, vector<int> arr) {
    int page=1,count=0;

    for(int i=0;i<n;i++)
    {
            for(int j=1;j<=arr[i];j++)
            {
                if(j==page)
                count++;

                if(j%k==0)
                page++;
            }
            if(arr[i]%k!=0)
            page++;
    }
    return count;

}
int main()
{
#ifndef ONLINE_JUDGE
    freopen("../input.txt", "r", stdin);
    freopen("../output.txt", "w", stdout);
#endif

    ios_base::sync_with_stdio(NULL);
    cin.tie(NULL);

    int n,k;
    cin>>n>>k;
    vector<int> arr(n);
    for(int i=0;i<n;i++)
    cin>>arr[i];
    cout<<workbook(n,k,arr);
    return 0;
}