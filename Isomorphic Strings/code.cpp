class Solution {
public:
    bool isIsomorphic(string s, string t) {
  if(s.size()!=t.size()){
      return false;
  }
  int i=0;
     map<char,int>m1;
     m1[s[i]]++;
     map<char,int>m2;
     m2[t[i]]++;
    for(int i=0;i<s.length();i++){
        if(m1[s[i]]!=m2[t[i]]){
            return false;
        }
        m1[s[i]]=i+1;
        m2[t[i]]=i+1;
        }
        return true;
    }
};
