class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        vector<int> output(n);
        
        // Step 1: Fill the output array with left products
        output[0] = 1;  // No elements to the left of the first element
        for (int i = 1; i < n; i++) {
            output[i] = output[i-1] * nums[i-1];  // Product of elements to the left
        }

        // Step 2: Traverse the array from right to left to include right products
        int right = 1;  // Initially, no elements to the right of the last element
        for (int i = n-1; i >= 0; i--) {
            output[i] *= right;  // Multiply current value in output with the product of elements to the right
            right *= nums[i];  // Update the right product for the next iteration
        }

        return output;
    }
};
