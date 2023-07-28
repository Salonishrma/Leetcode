class Solution {
public:
    bool isAnagram(string s, string t) {
      int n=s.size();
      int m=t.size();
      if(m!=n){
          return false;
      }
      map<int,int>m1;
       map<int,int>m2;
       for(int i=0;i<n;i++){
           m1[s[i]]++;
       }
       for(int i=0;i<m;i++){
           m2[t[i]]++;
       }
       if(m1!=m2)
       return false;
       return true;
    }
};
