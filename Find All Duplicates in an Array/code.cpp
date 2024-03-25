class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        unordered_map<int,int>m1;
        vector<int>v1;
        for(auto it:nums){
            m1[it]++;
            if(m1[it]>1){
                v1.push_back(it);
            }
        }
        return v1;
    }
};
