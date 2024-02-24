class Solution {
public:

    int firstBadVersion(int n) {
        int ans=0;
        for(int i=0;i<n;i++){
            if(isBadVersion(i)){
                return ans;
            }
            ans++;  
        }
        return ans;
    }
};
