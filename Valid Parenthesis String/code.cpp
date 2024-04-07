class Solution {
public:
    bool checkValidString(string s) {
        int n = s.length();
        int cnt=0;
        int star=0;
        int i=0;
        while( i <n){
            if(s[i]=='('){
                cnt++;
            }
            if(s[i]==')'){
                cnt--;
            }
            if(s[i]=='*'){
                star++;
            }
           if(cnt+star<0){
            return false;
           }
           i++;
        }
        int cnt1=0;
        int star1=0;
        int j=s.length()-1;
        while(j>=0){
            if(s[j]=='('){
                cnt1--;
            }
            if(s[j]==')'){
                cnt1++;
            }
           if(s[j]=='*'){
            star1++;
           }
           if(cnt1+star1 < 0){
            return false;
           }
           j--;
        }
        return true;
    }
};
