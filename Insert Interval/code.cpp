class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        // Step 1: Insert new interval
        intervals.push_back(newInterval);
        
        // Step 2: Sort intervals
        sort(intervals.begin(), intervals.end());
        
        // Step 3: Initialize merged intervals
        vector<vector<int>> ans;
        
        // Step 4: Merge intervals
        for(auto interval : intervals) {
            if(ans.empty() || ans.back()[1] < interval[0])
                ans.push_back(interval);
            else if(ans.back()[1] >= interval[0])
                ans.back()[1] = max(ans.back()[1], interval[1]);
        }
        
        // Step 5: Return merged intervals
        return ans;
    }
};
