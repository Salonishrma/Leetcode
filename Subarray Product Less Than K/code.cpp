class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
       if(k<=1){
        return 0;
       }
       long long product=1;
       int l=0;
       int cnt=0;
       for(int i=0;i<nums.size();i++){
        product*=nums[i];
            while(product >=k)
            product/=nums[l++];
        cnt+=(i-l+1);
       }
       return cnt;
    }
};
