class Solution {
public:
    int romanToInt(string s) {
    map<char,int>m1;
      m1.insert({'I',1});
      m1.insert({'V',5});
      m1.insert({'X',10});
      m1.insert({'L',50});
      m1.insert({'C',100});
      m1.insert({'D',500});
      m1.insert({'M',1000});
      int res=0;
      for(int i=0;i<s.size();i++){
          if(m1[s[i]]<m1[s[i+1]]){
           res-=m1[s[i]];
          }
          else{
              res+=m1[s[i]];
          }
      }
      return res;
    }
};
