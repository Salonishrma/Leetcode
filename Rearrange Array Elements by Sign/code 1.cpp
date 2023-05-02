class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int posindx=0;
        int negindx=1;
        vector<int> res(nums.size(),0);
        for(int i=0;i<nums.size();i++){
            if(nums[i]<0){
                res[negindx]=nums[i];
                negindx+=2;
            }
            else{
                res[posindx]=nums[i];
                posindx+=2;
            }
        }
    return res;
    }
};
