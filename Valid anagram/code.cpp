Method 1
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


Method 2 
class Solution {
public:
    bool isAnagram(string s, string t) {
      int n=s.size();
      int m=t.size();
      if(m!=n){
          return false;
      }
      sort(s.begin(),s.end());
      sort(t.begin(),t.end());
      for(int i=0;i<n;i++){
          if(s[i]!=t[i]){
              return false;
          }
      }
      return true;
    }
};
