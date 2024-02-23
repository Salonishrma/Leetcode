class Solution {
public:
    string getHint(string secret, string guess) {
        int cnt1=0;
        int cnt2=0;

        map<int,int>m1;
        map<int,int>m2;
        for(int i=0;i<secret.size();i++){
            if(secret[i]==guess[i]){
                cnt1++;
            }
            else{
                m1[secret[i]]++;
                m2[guess[i]]++;
            }
        }
       auto it1 = m1.begin();
       auto it2 = m2.begin();

        while (it1 != m1.end() && it2 != m2.end()){
        if(it1->first==it2->first){
            cnt2+=min(it1->second,it2->second);
            it1++;
            it2++;
        }
        else if (it1->first < it2->first) {
            it1++;
         } 
         else {
        it2++;
        }
        }
    return to_string(cnt1)+"A"+to_string(cnt2)+"B";
    }
};
