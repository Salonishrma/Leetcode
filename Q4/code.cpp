class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>v1;
        double ans;
        int n=nums1.size();
        int m=nums2.size();
        int totlsize=n+m;
        int i=0;
        int j=0;
        while(i<n && j<m){
                if(nums1[i]<nums2[j])
                {
                    v1.push_back(nums1[i]);
                    i++;
                }
                else
                {
                    v1.push_back(nums2[j]);
                    j++;
                }
        }
        while(i<n)
        {
            v1.push_back(nums1[i]);
            i++;
        }
        while(j<m)
        {
            v1.push_back(nums2[j]);
            j++;
        }
        
            if(totlsize %2 ==0)
            {
               return (double)(v1[totlsize/2]+v1[totlsize/2 -1])/2.0;
            }
            else
            {
                return (double)(v1[totlsize/2]);
            }
    }
}; 
