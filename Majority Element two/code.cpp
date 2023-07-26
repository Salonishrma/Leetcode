class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int>v1;
        int n=nums.size();
        int mini=int(n/3)+1;
        map<int,int>m1;
        for(int i=0;i<n;i++){
         m1[nums[i]]++;
         if(m1[nums[i]]==mini){
             v1.push_back(nums[i]);
         }
         if(v1.size()==2)
         break;
        }
        return v1;
    }
};
