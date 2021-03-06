class Solution {
public:
    bool isRobotBounded(string instructions) {
        int x=0,y=0,dir=0;
        for(auto i : instructions)
        {
            if(i=='G')
            {
                if(dir==0)
                    y++;
                else if(dir==1)
                    x++;
                else if(dir==2)
                    y--;
                else 
                    x--;
            }
            else if(i=='L')
            {
                dir--;
                dir=(dir+4)%4;
            }
            else
            {
                dir++;
                dir%=4;
            }
        }
        return dir!=0 || (x==0 && y==0);
        
    }
};