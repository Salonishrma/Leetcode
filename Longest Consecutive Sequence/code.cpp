class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int size = nums.size();
        if(!size) return 0;
        sort(nums.begin(), nums.end());
        int longest = 0;
        int cur_longest = 1;
        for(int i=1;i<size;i++){
            if(nums[i] == nums[i-1]) continue; //same element as previous skip this
            else if(nums[i] == nums[i-1] + 1) cur_longest++; //current element is consecutive so increase it.
            else longest = max(longest,cur_longest), cur_longest = 1; // we can't extend so update longest as the maximum of the both and reset the current_longest.
        }
        return max(longest,cur_longest);
    }
};
