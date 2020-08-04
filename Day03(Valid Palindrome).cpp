class Solution {
public:
    bool isPalindrome(string s) {
        string sl;
        for(auto i:s) 
            if((i>='a' && i<='z') || (i>='A' && i<='Z') || (i>='0' && i<='9')) sl+=i;
        
        transform(sl.begin(), sl.end(), sl.begin(), ::tolower);
      
        if(sl.empty()) return true;
        
        int l=sl.length(),flag=0;
        for(int i=0;i<=l/2;i++) 
            if(sl[i]!=sl[l-i-1]) flag=1;
            
        if(flag==1) return false;
        return true;
    }
};
