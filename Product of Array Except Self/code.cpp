#include <vector>

using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> pre_products(n);
        vector<int> suf_products(n);
        vector<int> ans(n);
        int prefix = 1;
        for (int i = 0; i < n; ++i) {
            pre_products[i] = prefix;
            prefix *= nums[i];
        }
        int suffix = 1;
        for (int i = n - 1; i >= 0; --i) {
            suf_products[i] = suffix;
            suffix *= nums[i];
        }
        for (int i = 0; i < n; ++i) {
            ans[i] = pre_products[i] * suf_products[i];
        }
        return ans;
    }
};
