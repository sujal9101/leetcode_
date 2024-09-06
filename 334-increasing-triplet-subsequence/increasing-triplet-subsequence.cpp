class Solution {
public:
    bool increasingTriplet(vector<int>& nums) 
    {
        int first_small = INT_MAX;
        int second_small = INT_MAX;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]<=first_small)
                first_small=nums[i];  //Update the smallest number found so far
            else if(nums[i]<= second_small)
                second_small=nums[i]; // Update the second smallest number
            else
                return true; //found a number greater than first_small and second_small
        }
        return false;
    }
};