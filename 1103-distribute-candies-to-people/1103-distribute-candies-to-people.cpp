class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> sol(num_people,0);
        int i=0,k=0;
        
        while(candies>0)
        {
            sol[i]+=k+1<candies?k+1:candies;
            k++;
            candies-=k;
            i++;
            if(i==num_people)
                i=0;
        }
        return sol;
    }
};