class Solution {
public:
    string makeGood(string s) {
      stack<char>s1;
      string ans="";
      for(int i=0;i<s.size();i++){
        if(!s1.empty() && abs(s1.top()-s[i])==32){
            s1.pop();
        }
        else{
            s1.push(s[i]);
        }
      }
      while(!s1.empty()){
        ans=s1.top()+ans;
        s1.pop();
      }
      return ans;
    }
};
