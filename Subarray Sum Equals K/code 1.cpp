lass Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int count=0;
        int sum=0;
        map<int,int>m1;
        m1[0]=1;
        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            int remove=sum-k;
            if(m1.count(remove))
                count+=m1[remove];
                m1[sum]++; 
        }
    return count;
    }
};
