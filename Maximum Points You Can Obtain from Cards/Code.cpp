class Solution {
public:
    int maxScore(vector<int>& cardPoints, int k) {
      int leftsum=0;
      int rightsum=0;
      int res=0;
      for(int i=0;i<k;i++){
        leftsum+=cardPoints[i]; //leftsum=6
      }
        int ans=leftsum; //ans=6
        int j=cardPoints.size()-1;
        for(int i=k-1;i>=0;i--){
            leftsum-=cardPoints[i];   //6-3=3
            rightsum+=cardPoints[j]; //
            j--;
             res=leftsum+rightsum;
        ans=max(ans,res);
        }
      return ans;
    }
};
