class Solution {
public:
    bool detectCapitalUse(string word) {
        int flag=1,i=1;
        if(word[0]>='A' && word[0]<='Z'){
            while(i<word.length()){
                if(word[i]>='A' && word[i]<='Z') flag++;
                i++;
            }
            if(flag==1 || flag==word.size()) return true;
            return false;
        }
        else{
            while(i<word.length()){
                if(word[i]>='a' && word[i]<='z') flag++;
                i++;
            }
            if(flag==word.length()) return true;
            return false;
        }
        return false;
    }
};
