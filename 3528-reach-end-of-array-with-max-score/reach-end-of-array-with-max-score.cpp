class Solution {
public:
    long long findMaximumScore(vector<int>& nums) {
        long maxi=0, sum=0;
        for(int i=0;i<nums.size()-1;i++) {
            maxi=max(maxi,static_cast<long>(nums[i]));
            sum=sum+maxi;
        }
        return sum;
    }
};