class Solution {
public:
    string lastNonEmptyString(string s) {
        unordered_map<char,int>m1;
        string ans="";
        int maxi=0;
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
            maxi =max(maxi,m1[s[i]]);
        }
        m1.clear();
        for(int i=0;i<s.size();i++){
            m1[s[i]]++;
            if(m1[s[i]]==maxi){
                ans+=s[i];
            }
        }
        return ans;
    }
};
