class Solution {
public:
int strStr(string haystack, string needle) {
    
    int i =0, j = 0;
    string check = "";
    if(!needle.size())
        return 0;
    while(j < needle.size() - 1){
        check += haystack[j++];
    }
    while(j < haystack.size()){
        check += haystack[j];
        if(check == needle)
            return i;
        else{
            ++i;++j;
            check.erase(0,1);
        }
    }
    return -1;
}    

};