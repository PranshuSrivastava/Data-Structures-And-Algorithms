class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> ans(n);
        int k = 0;
        if(n & 1){
            n = n/2;
            for(int i = -n; i <=n; ++i)
            {    ans[k] = i;
                k++;
            }
        }
        else
        {
            for(int i = -n; i <=n; i+=2)
            {  cout<<k<<endl;
                if(i != 0)
               { ans[k] = i;
                k++;}
            }
        }
        return ans;
    }
};