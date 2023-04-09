class Solution {
public:
    int lengthOfLastWord(string s) {
       int k=s.size()-1;
       while(k>=0 && s[k]==' ')
          k--;
           int ans=0;
       while(k>=0 && s[k]!=' '){
           k--;
           ans++;
       }
       return ans;
       }
};
