class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int maxi=INT_MIN,count=0;
        for(int i=0;i<sentences.size();i++)
        {
            string str=sentences[i];
            for(char j:str)
            {
                if(j==' ')
                    count++;
                
            }
            maxi=max(maxi,count);
            count=0;
        }
        return maxi+1;
    }
};