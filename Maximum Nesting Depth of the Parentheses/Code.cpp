class Solution {
public:
    int maxDepth(string s) {
        int cnt=0;
        int bracket=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='('){
                bracket++;
            }
            if(s[i]==')'){
                bracket--;
            }
            cnt=max(bracket,cnt);
        }
        return cnt;
    }
};
