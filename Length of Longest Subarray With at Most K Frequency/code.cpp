class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>m1;
        int result=1;
        int left=0;
        int right=0;
        while(left<n && right<n){
            m1[nums[right]]++;
            while(m1[nums[right]]>k){
                m1[nums[left]]--;
                left++;
            }
            result=max(result,right-left+1);
            right++;
        }
        return result;
    }
};
