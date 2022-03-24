class Solution {
public:
    int getSum(int a, int b) {
        if(b<0){
            b = abs(b);
            for(int i = 0; i<b;i++){
                a--;
            }
        }
        else{
        for(int i = 0; i<b ; i++){
            cout<<a<<" "<<b<<endl;
            a++;
        }            
        }

        return a;
        
    }
};