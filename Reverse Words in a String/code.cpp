class Solution {
public:
    string reverseWords(string s) {
      int n=s.size();
      if(n==0){
          return s;
      }
      stack<string>s1;
      string ans;
      for(int i=0;i<n;i++){
          string word;
      if(s[i]==' ')
      continue;
      while(i<n && s[i]!=' '){
          word+=s[i];
          i++;
      }
      s1.push(word);
      }
      while(!s1.empty()){
      ans+=s1.top();
      s1.pop();
      if(!s1.empty()){
         ans+=" " ;
      }
      }
      return ans;
    }
};
