class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int ptr =0;
        for(int i=0;i<nums.size();i++){
            if(ptr<2 || nums[i]>nums[ptr-2]){ 
                nums[ptr]=nums[i];
                ptr++;
            }
        }
        return ptr;
    }
};
