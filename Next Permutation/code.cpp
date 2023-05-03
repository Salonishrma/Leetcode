class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size(); // size of the array.

    // Step 1: Find the break point:
    int ind = -1; // break point
    for (int i = n - 2; i >= 0; i--) {
        if (nums[i] < nums[i + 1]) {
            // index i is the break point
            ind = i;
            break;
        }
    }

    // If break point does not exist:
    if (ind == -1) {
        // reverse the whole array:
        reverse(nums.begin(), nums.end());
        return;
    }

    // Step 2: Find the next greater element
    //         and swap it with arr[ind]:

    for (int i = n - 1; i > ind; i--) {
        // As we know all the values after 'ind' are sorted in descending order,
        // so we can simply traverse from the end to the begining 
    //to get the value which is greater than ind but smaller than the remaining values.
    // Then we can swap them. 
    //and we must break out of the loop.
        if (nums[i] > nums[ind]) {
            swap(nums[i], nums[ind]);
            break;
        }
    }

    // Step 3: reverse the right half:

// After that the 
//remaining array will be revesed to get the 
//next permutation
    reverse(nums.begin() + ind + 1, nums.end());
       return;
           }
  
};
