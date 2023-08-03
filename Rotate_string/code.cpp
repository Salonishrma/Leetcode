// solution 1
#include<bits/stdc++.h>
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        string ans=s+s;
     if((ans).find(goal)<ans.size())
     return true;
     return false;
    }
};

//solution 2
#include<bits/stdc++.h>
class Solution {
public:
    bool rotateString(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
      
     if((s+s).find(goal)!=string::npos)
        return true;
     return false;
    }
};
