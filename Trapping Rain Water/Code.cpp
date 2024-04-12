class Solution
{
public:
    int trap(vector<int> &height)
    {
        int n = height.size(); 
        int water = 0; 
        int l=0,r=height.size()-1;
        int left=-1;
        int right=-1;
        while(l<r){
            left= max(left,height[l]);
            right=max(right,height[r]);

            if(left < right){
                water+=left - height[l++];
            }
            else{
                water+=right -  height[r--];
            }
        }
        return water;
    }
};
