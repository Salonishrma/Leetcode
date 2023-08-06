#include <bits/stdc++.h>
class Solution {
public:
   int fun(vector<long long int >&num){
       long long int n=num.size();
       int prev1=num[0];
       int prev2=0;
       for(int i=1;i<n;i++){
        int take=num[i] ;
       if(i>1)
        take +=prev2;
       int nontake=0+prev1;
       int curri=max(take,nontake);
       prev2=prev1;
       prev1=curri;
       }
       return prev1;
   }
    int rob(vector<int>& nums) {
        vector<long long int>temp1;
        vector<long long int>temp2;
        long long n=nums.size();
        if(n==1){
            return nums[0];
        }
        for(int i=0;i<n;i++){
            if(i!=0){
                temp1.push_back(nums[i]);
            }
            if(i!=n-1){
                temp2.push_back(nums[i]);
            }
        }
        return max(fun(temp1),fun(temp2));
    }
};
